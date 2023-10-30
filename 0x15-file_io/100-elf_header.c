#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define ELF_MAGIC_NUMBER_SIZE 16
#define ELF_HEADER_SIZE 64

typedef struct {
    unsigned char e_ident[ELF_MAGIC_NUMBER_SIZE];
    unsigned char e_type;
    unsigned char e_machine;
    unsigned char e_version;
    unsigned char e_entry[4];
    unsigned char e_phoff[4];
    unsigned char e_shoff[4];
    unsigned char e_flags[4];
    unsigned char e_ehsize[2];
    unsigned char e_phentsize[2];
    unsigned char e_phnum[2];
    unsigned char e_shentsize[2];
    unsigned char e_shnum[2];
    unsigned char e_shstrndx[2];
} ElfHeader;

void print_error_and_exit()
{
    dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
    exit(98);
}

void print_elf_header_info(ElfHeader *header)
{
	int i;

    printf("  Magic:   ");
    for (i = 0; i < ELF_MAGIC_NUMBER_SIZE; ++i)
    {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", (header->e_ident[4] == 1) ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", (header->e_ident[5] == 1) ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[6]);
    printf("  OS/ABI:                            %d\n", header->e_ident[7]);
    printf("  ABI Version:                       %d\n", header->e_ident[8]);
    printf("  Type:                              %d\n", header->e_type);
    printf("  Entry point address:               0x");
    for (i = 0; i < 4; ++i)
    {
        printf("%02x", header->e_entry[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
	int fd, bytes_read;
	ElfHeader header;

    if (argc != 2) {
        dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Unable to open file\n");
        return (98);
    }

    bytes_read = read(fd, &header, ELF_HEADER_SIZE);
    if (bytes_read != ELF_HEADER_SIZE)
    {
        close(fd);
        print_error_and_exit();
    }

    if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
    {
        close(fd);
        print_error_and_exit();
    }

    print_elf_header_info(&header);
    close(fd);

    return (0);
}

