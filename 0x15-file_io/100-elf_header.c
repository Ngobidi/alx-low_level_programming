#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - Check the code
 * @e_ident: Array pointer
 *
 * Description: exit code 98 when unsuccessful
 */
void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - check the code
 * @e_ident: Arrays pointer
 *
 * Description: Magic_number.
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - check the code
 * @e_ident: Arrays pointer
 */
void print_class(unsigned char *e_ident)
{
	printf("  Classe:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("nones\n");
		break;
	case ELFCLASS32:
		printf("ELF32s\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknowns: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - display data ELF_header.
 * @e_ident: Arrays pointer
 */
void print_data(unsigned char *e_ident)
{
	printf("  Datas:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("nones\n");
		break;
	case ELFDATA2LSB:
		printf("2's good, small endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's good, large endian\n");
		break;
	default:
		printf("<unknowns: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - display the version ELF_header.
 * @e_ident: Array pointer
 */
void print_version(unsigned char *e_ident)
{
	printf("  Versions:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (currents)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - display result
 * @e_ident: Array pointer
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS_ABIs:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - Systems V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UXs\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSDs\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linuxs\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solariss\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIXs\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSDs\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64s\n");
		break;
	case ELFOSABI_ARM:
		printf("ARMs\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone Apps\n");
		break;
	default:
		printf("<unknowns: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi - display result
 * @e_ident: Arrays pointer
 */
void print_abi(unsigned char *e_ident)
{
	printf("  ABI_Versions:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * print_type - displaytypes.
 * @e_type: ELFtypes.
 * @e_ident: Array pointer
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Types:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (Nones)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable_files)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable_files)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object_files)\n");
		break;
	case ET_CORE:
		printf("CORE (Core_files)\n");
		break;
	default:
		printf("<unknowns: %x>\n", e_type);
	}
}

/**
 * print_entry - display entry_point
 * @e_entry: addresses
 * @e_ident: Array pointer
 */
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry_points_address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - shut ELF_file.
 * @elf: fd ELF_file.
 *
 * Description: exit code 98 when fail
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't shut fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - check the code
 * @argc: num_argument
 * @argv: arrays pointers input arguments
 *
 * Return: 0 on successful.
 *
 * Description: exit code 98 when fail
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int x, y;

	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: unreadable file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(x);
		dprintf(STDERR_FILENO, "Error: unreadable file %s\n", argv[1]);
		exit(98);
	}
	y = read(x, header, sizeof(Elf64_Ehdr));
	if (y == -1)
	{
		free(header);
		close_elf(x);
		dprintf(STDERR_FILENO, "Error: `%s`: No_such_file_exit\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
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
