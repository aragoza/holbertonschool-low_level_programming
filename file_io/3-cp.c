#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that apply modification by system call and copy
 * a file into another
 *
 * @argc: count the number of argument
 * @argv: store the argument passed in parameter
 *
 * Return: (0) on success
 */

int main(int argc, char *argv[])
{
	int filde_from, filde_to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(1024);
	if (buf == NULL)
	{
		return (-1);
	}

	filde_from = open(argv[1], O_RDONLY);
	if (filde_from == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s", argv[1]);
		exit(98);
	}

	filde_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (filde_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}

	r = read(filde_from, buf, 1024);
	if (r > 0)
	{
		r = read(filde_from, buf, 1024);
		w = write(filde_to, buf, r);
		if (r != w)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s", argv[1]);
		exit(98);
	}

	if (close(filde_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", filde_from);
		exit(100);
	}

		if (close(filde_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", filde_to);
		exit(100);
	}

	free(buf);
	return (0);
}
