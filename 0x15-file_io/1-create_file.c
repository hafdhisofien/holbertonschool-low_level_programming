#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: pointer
 * @text_content: pointer
 * Return: 1 on succes -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fopen, fwrite, i = 0;
char *s;
if (filename == NULL)
return (-1);
if (text_content == NULL)
{
fopen = open(filename, O_CREAT, 0600);
if (fopen == -1)
return (-1);
return (1);
}
for (i = 0; text_content[i] != '\0'; i++)
;
s = malloc(i * sizeof(char));
if (s == NULL)
return (-1);
fopen = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
if (fopen == -1)
return (-1);
fwrite = write(fopen, text_content, i);
if (fwrite == -1)
return (-1);
close(fopen);
free(s);
return (1);
}
