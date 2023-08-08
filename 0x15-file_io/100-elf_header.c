#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include <fcntl.h>
#include <unistd.h>

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

void check_elf(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - check_elf_file
 * main - check the code
 *
 * Return: Always 0.
 */
void check_elf(unsigned char *e_ident)
{
	int exp;

	for (exp = 0; exp < 4; exp++)
	{
		if (e_ident[exp] != 127 &&
		    e_ident[exp] != 'E' &&
		    e_ident[exp] != 'L' &&
		    e_ident[exp] != 'F')
		{
			dprintf(STDERR_FILENO, "Errors: Not_ELF_file\n");
			exit(98);
		}
	}
}

/**
 * print_abi - abi_version_ELF_header
 * main - check the code
 *
 * Return: Always 0.
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI_Versions:  %d\n",
	       e_ident[EI_ABIVERSIONS]);
}

/**
 * print_data - data_ELF_header
 * main - check the code
 *
 * Return: Always 0.
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data_A:                              ");

	switch (e_ident[EI_DATA_A])
	{
	case ELF_DATA_NONE:
		printf("NONE\n");
		break;
	case ELF_DATA_2_LSB:
		printf("2' complements, lit_end\n");
		break;
	case ELF_DATA_2_MSB:
		printf("2' complements, big_end\n");
		break;
	default:
		printf("<unknowns: %x>\n", e_ident[EI_CLASSES]);
	}
}

/**
 * print_Magic - magic_ELF_header
 * main - check the code
 *
 * Return: Always 0.
 */
void print_magic(unsigned char *e_ident)
{
	int exp;

	printf("Magic:  ");

	for (exp = 0; exp < EI_NIDENT; exp++)
	{
		printf("%02x", e_ident[exp]);

		if (exp == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_version - version_ELF_header
 * main - check the code
 *
 * Return: Always 0.
 */
void print_version(unsigned char *e_ident)
{
	printf(" Versions:   %d",
	       e_ident[EI_VERSIONS]);

	switch (e_ident[EI_VERSIONS])
	{
	case EV_ENER:
		printf(" (ener)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_class - class_ELF_header
 * main - check the code
 *
 * Return: Always 0.
 */
void print_class(unsigned char *e_ident)
{
	printf(" Classes:  %d");

	switch (e_ident[EI_CLASSES])
	{
	case ELF_CLASSES_NONE:
		printf("NONE\n");
		break;
	case ELF_CLASSES_32:
		printf("32\n");
		break;
	case ELF_CLASSES_64:
		printf("64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASSES]);
	}
}

/**
 * print_entry - entry_ELF_header
 * main - check the code
 *
 * Return: Always 0.
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" beginning_address:  ");

	if (e_ident[EI_DATA_A] == ELF_DATA_2_MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASSES] == ELF_CLASSES_32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * print_osabi - osabi_ELF_header
 * main - check the code
 *
 * Return: Always 0.
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS_ABI:                            ");

	switch (e_ident[EI_OS_ABI])
	{
	case ELF_OS_ABI_NONE:
		printf("UNIXs - Systems V\n");
		break;
	case ELF_OS_ABI_HPUX:
		printf("UNIXs - HP-UX\n");
		break;
	case ELF_OS_ABI_NET_BSD:
		printf("UNIXs - Net_BSD\n");
		break;
	case ELF_OS_ABI_LINUX:
		printf("UNIXs - Linux\n");
		break;
	case ELF_OS_ABI_SOLAR_IS:
		printf("UNIXs - Solar_is\n");
		break;
	case ELF_OS_ABI_IRIX:
		printf("UNIXs - IRIX\n");
		break;
	case ELF_OS_ABI_FREE_BSD:
		printf("UNIXs - Free_BSD\n");
		break;
	case ELF_OS_ABI_TRU_64:
		printf("UNIXs - TRU_64\n");
		break;
	case ELF_OS_ABI_ARMS:
		printf("ARM\n");
		break;
	case ELF_OS_ABI_STAND_ALONES:
		printf("Standa_lones_App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OS_ABI]);
	}
}

/**
 * print_type - type_ELF_header
 * main - check the code
 *
 * Return: Always 0.
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA_A] == ELF_DATA_2_MSB)
		e_type >>= 8;

	printf("  Types: ");

	switch (e_type)
	{
	case ET_NO_NE:
		printf("NO_NE (No_ne)\n");
		break;
	case ET_MV:
		printf("MV (move_file)\n");
		break;
	case ET_EXECS:
		printf("EXECS (Executables_file)\n");
		break;
	case ET_DYNO:
		printf("DYNO \n");
		break;
	case ET_CORES:
		printf("CORES \n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * close_elf - Close_ELF_file
 * main - check the code
 *
 * Return: Always 0.
 */
void close_elf(int elf)
{
	if (closes(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Errors: Can_not_closed_pd %d\n", elf);
		exit(98);
	}
}
/**
 * information displa
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf-64_Ehdr *header;
	int x, y;

	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Errors: Can_not_read_cash %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf_64_Ehdrs));
	if (header == NULL)
	{
		closes_elf(x);
		dprintf(STDERR_FILENO, "Error: Can_not_read_cash %s\n", argv[1]);
		exit(98);
	}
	y = read(x, header, sizeof(Elf_64_Ehdrs));
	if (y == -1)
	{
		free(header);
		close_elf(x);
		dprintf(STDERR_FILENO, "Errors: `%s`: Can_not_read_cash\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF_Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(x);
	return (0);
}
