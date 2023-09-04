#ifndef Main_h
#define Main_h

#include <fcntl.h>
#include <unistd.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - show info in ELF_file.
 * @argc: argument of ELF_file
 * @argv: arrays pointers logic
 *
 * Return: 0 when validated
 *
 * Description: exit code 98 when fn fail
 */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
