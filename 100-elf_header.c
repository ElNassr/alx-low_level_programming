#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * main - displays the information contained in the ELF header
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	Elf64_Ehdr ehdr;
	int i;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	fp = fopen(argv[1], "rb");
	if (fp == NULL)
	{
		fprintf(stderr, "Cannot open file %s\n", argv[1]);
		exit(98);
	}
	if (fread(&ehdr, sizeof(ehdr), 1, fp) != 1)
	{
		fprintf(stderr, "Cannot read ELF header\n");
		exit(98);
	}
	if (ehdr.e_ident[EI_MAG0] != ELFMAG0 ||
	          ehdr.e_ident[EI_MAG1] != ELFMAG1 ||
	          ehdr.e_ident[EI_MAG2] != ELFMAG2 ||
	    ehdr.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file\n");
		exit(98);
	}
	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", ehdr.e_ident[i]);
	printf("\n");
	printf("Class:                             ");
	switch (ehdr.e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", ehdr.e_ident[EI_CLASS]);
	}
	/* You can add more code to display other information */
	fclose(fp);
	return (0);
}
