#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that append text to a file
 *
 * @filename: the name of the file
 * @text_content: the string append to the file
 *
 * Return: (1) on success (-1) if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filde, i;

	if (filename == NULL)
		return (-1);

	filde = open(filename, O_APPEND | O_WRONLY, 0600);
	if (filde == -1)
		return (-1);

	if (text_content != NULL)
	{
		i = 0;

		while (text_content[i] != '\0')
		{
			i++;
		}

		if (write(filde, text_content, i) == -1)
		{
			close(filde);
			return (-1);
		}
	}
	close(filde);
	return (1);
}
