#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * read_textfile - function that read a text file and display it in the stdout
 *
 * @filename: the name of the file
 * @letters: the number of char we want to diplay
 *
 * Return: (letters) the number of char diplay (0) if function failed (-1)
 * if not enough memory
 */

int create_file(const char *filename, char *text_content)
{
    int filde, i;

    if (filename == NULL)
        return (-1);

    filde = open(filename, O_CREAT | O_WRONLY, 0600);
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