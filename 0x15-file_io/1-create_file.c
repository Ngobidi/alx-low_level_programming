#include "main.h"

/**
 * create_file - produce a file.
 * @filename: filename pointer
 * @text_content: pointers_string
 *
 * Return: 1 if sucessful, else -1 when file is Null or not created.
 */
int create_file(const char *filename, char *text_content)
{
    int chapter, page, length = 0;

    if (filename == NULL)
       return (-1);

    if (text_content != NULL)
    {
       for
		(length = 0; text_content[length] != '\0'; length++);
    }

    chapter = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
    page = write(chapter, text_content, length);

    if (chapter == -1 || page == -1)
       return (-1);

    close(chapter);

   return (1);
}
