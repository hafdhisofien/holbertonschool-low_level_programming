#include "holberton.h"
/**
 * read_textfile - function thqt reads a file and print it
 * @filename: pointer
 * @letters: input function
 * Return: 0 or 1;
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fopen, fwrite, fread;
char *s;
if (filename == NULL)
return (0);
s = malloc(letters * sizeof(char));
if (s == NULL)
return (0);
fopen = open(filename, O_RDONLY);
if (fopen == -1)
return (0);
fread = read(fopen, s, letters);
fwrite = write(STDOUT_FILENO, s, fread);
if (fwrite == -1)
return (0);
close(fopen);
free(s);
return (fwrite);
}
