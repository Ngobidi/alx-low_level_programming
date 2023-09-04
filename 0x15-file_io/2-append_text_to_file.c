#include "main.h"

/**
 * append_text_to_file - Add texts at the end of a file.
 * @filename: filename pointers
 * @text_content: strings to append at the end of the file.
 *
 * Return: 1 when successfull or file existed, -1 if null
 * if text_content is NULL do not add anything to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int x, z, length = 0;

    if (filename == NULL)
	return (-1);

    if (text_content != NULL)
    {
	for
	(length = 0; text_content[length];
	length++);
    }

    x = open(filename, O_WRONLY | O_APPEND);

    if (x == -1)
	return (-1);

    z = write(x, text_content, length);

    if (z == -1)
    {
	close(x);
	return (-1);
    }

    close(x);

    return (1);
}
