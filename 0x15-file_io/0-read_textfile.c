#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to be readed
 * @letters: the number of letters it should read and print
 *
 * Return: 2 success, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print_field;
	int file, read_file;

	if (!filename)
		return (0);

	/*Create the buffer print_field*/
	print_field = malloc(letters * sizeof(char));
	if (print_field == NULL)
		return (0);

	/*Open the file*/
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	/*Read the file and save in buffer*/
	read_file = read(file, print_field, letters);

	/*Write as standard output*/
	write(STDOUT_FILENO, print_field, read_file);

	close(file);
	free(print_field);
	return (read_file);
}
