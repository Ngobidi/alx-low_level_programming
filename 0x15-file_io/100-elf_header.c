#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>



void validate_elf(unsigned char *data);
void display_magic(unsigned char *data);
void display_class(unsigned char *data);
void display_data(unsigned char *book);
void display_version(unsigned char *data);
void display_abi(unsigned char *data);
void display_osabi(unsigned char *data);
void display_type(unsigned int e_type, unsigned char *data);
void display_entry(unsigned long int e_entry, unsigned char *data);
void close_elf(int elf);

/**
 * validate_elf - validate ELF_file.
 * @data: Array pointers.
 *
 * Description: exit code 98 if unsuccessful
 */
void validate_elf(unsigned char *data)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (data[i] != 127 &&
		    data[i] != 'E' &&
		    data[i] != 'L' &&
		    data[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Errors: Not an ELF_file\n");
			exit(98);
		}
	}
}

/**
 * display_class -  show_class of ELF_header.
 * @data: arrays pointer
 */
void display_class(unsigned char *data)
{
	printf("  Classes:                         ");

	switch (data[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("nones\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", data[EI_CLASS]);
	}
}

/**
 * display_magic - show magic_number
 * @data: array pointers
 *
 * Description: Magics_number differented by spaces.
 */
void display_magic(unsigned char *data)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", data[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * display_data - display data_ELF_header.
 * @book: Array pointers
 */
void display_data(unsigned char *book)
{
	printf("  datas:                              ");

	switch (book[EI_DATA])
	{
	case ELFDATANONE:
		printf("nones\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", book[EI_CLASS]);
	}
}
/**
 * display_version - show version
 * @data: Array pointers
 */
void display_version(unsigned char *data)
{
	printf("  Versions:                           %d",
	       data[EI_VERSION]);

	switch (data[EI_VERSION])
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
 * display_abi - show ABI_versions
 * @data: pointers array
 */
void display_abi(unsigned char *data)
{
	printf("  ABI_Versions:                       %d\n",
	       data[EI_ABIVERSION]);
}
/**
 * display_type - display the type of  ELF_header.
 * @e_type: ELF_type.
 * @data: Array pointers
 */
void display_type(unsigned int e_type, unsigned char *data)
{
	if (data[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Types:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONEs (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable_file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable_file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object_file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core_file)\n");
		break;
	default:
		printf("<unknowns: %x>\n", e_type);
	}
}
/**
 * display_entry - display entry points of ELF_header.
 * @e_entry: The addresses.
 * @data: Array pointers
 */
void display_entry(unsigned long int e_entry, unsigned char *data)
{
	printf("  Entry_points_address:               ");

	if (data[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (data[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 * display_osabi - display OS_ABI of ELF_header.
 * @data: Array pointers
 */
void display_osabi(unsigned char *data)
{
	printf("  OS_ABI:                            ");

	switch (data[EI_OSABI])
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
		printf("UNIX - Solarise\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIXs\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSDs\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARMs\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone Apps\n");
		break;
	default:
		printf("<unknown: %x>\n", data[EI_OSABI]);
	}
}

/**
 * close_elf - shut ELF_file.
 * @elf: fd
 *
 * Description: exit code 98 if unsuccessful
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't shut files_d %d\n", elf);
		exit(98);
	}
}
