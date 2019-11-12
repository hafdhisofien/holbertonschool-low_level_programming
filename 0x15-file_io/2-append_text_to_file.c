#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to create
 * @text_content: string to appends in the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fopen, fwrite, i;
char *s;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
for (i = 0; text_content[i] != '\0'; i++)
;
s = malloc(i * sizeof(char));
if (s == NULL)
return (-1);
fopen = open(filename, O_RDWR | O_APPEND);
if (fopen == -1)
return (-1);
fwrite = write(fopen, text_content, i);
if (fwrite == -1)
return (-1);
close(fopen);
free(s);
return (1);
}
