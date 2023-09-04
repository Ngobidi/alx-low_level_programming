#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - study texts_file and display output POSIX stdout.
 * @filename: filename_pointer
 * @letters: letters_num fn to reads and display
 *
 * Return: 0 when file cannot opened or read or null or write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
   ssize_t x, y, z;
   char *text;

   if (filename == NULL)
       return (0);
   text = malloc(sizeof(char) * letters);
   if (text == NULL)
       return (0);

   x = open(filename, O_RDONLY);
   do { y = read(x, text, letters);
       if (y == -1)
       {
	free(text);
	close(x);
	return (0);
       }

       z = write(STDOUT_FILENO, text, y);
       if (z == -1 || z != y)
       {
	free(text);
	close(x);
	return (0);
       }
     }
    while (0);

    free(text);
    close(x);

    return (z);
}
