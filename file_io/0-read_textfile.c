#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int reading, fildes;
	char *buf;

	buf = malloc(sizeof(char)*(letters));
	if (buf == NULL)
		return (-1);

	if (filename == NULL)
	{
		free(buf);
		return (0);
	}

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
	{
		free(buf);
		close(fildes);
		return (0);
	}

	reading = read(fildes, buf, letters);

	write(1, buf, reading);

	close(fildes);
	return (letters);
}
