#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * print_error_and_exit - Prints an error message to STDERR and exits.
 * @exit_code: The exit code.
 * @message: The error message (with %s if filename should be printed).
 * @filename: The file name related to the error (can be NULL).
 */
void print_error_and_exit(int exit_code, const char *message, const char *filename)
{
	if (filename)
		dprintf(STDERR_FILENO, message, filename);
	else
		dprintf(STDERR_FILENO, "%s", message);
	exit(exit_code);
}

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, otherwise exits with error code.
 */
int main(int argc, char **argv)
{
	int input_fd, output_fd, read_count, write_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to\n", NULL);

	input_fd = open(argv[1], O_RDONLY);
	if (input_fd == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);

	output_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (output_fd == -1)
		print_error_and_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((read_count = read(input_fd, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(output_fd, buffer, read_count);
		if (write_count != read_count)
			print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	if (read_count == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(input_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_fd), exit(100);
	if (close(output_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", output_fd), exit(100);

	return (0);
}
