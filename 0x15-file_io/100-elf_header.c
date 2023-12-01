#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

void print_error_and_exit(const char *error_message);
void print_elf_header_info(Elf64_Ehdr *header);
int main(int argc, char *argv[]);


/**
 * print_error_and_exit - Program prints error and exit
 * message
 * @error_message: message to be printed
 * Return: void
 */


void print_error_and_exit(const char *error_message)
{
	fprintf(stderr, "%s\n", error_message);
	exit(98);
}

/**
 * print_elf_header_info - Program prints elf header info
 * @header: header
 * Return: void
 */

void print_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ?
			"ELF64" : "ELF32");
	printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ?
			"UNIX - System V" : "Other");
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", (header->e_type == ET_NONE) ? "NONE (Unknown Type)" :
			(header->e_type == ET_REL) ? "REL (Relocatable file)" :
			(header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
			(header->e_type == ET_DYN) ? "DYN (Shared object file)" :
			(header->e_type == ET_CORE) ? "CORE (Core file)" : "Other");
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}


/**
 * main - Program entry point
 * @argc: The number of arguments
 * @argv: arguments array pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{	const char *filename = argv[1];
Elf64_Ehdr header;
int fd = open(filename, O_RDONLY);

if (argc != 2)
{
	print_error_and_exit("Usage: elf_header elf_filename");
}

if (fd == -1)
{
	print_error_and_exit(strerror(errno));
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
	close(fd);
	print_error_and_exit("Error reading ELF header");
}

if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
{
	close(fd);
	print_error_and_exit("Not an ELF file");
}

print_elf_header_info(&header);

close(fd);
return (0);
}
