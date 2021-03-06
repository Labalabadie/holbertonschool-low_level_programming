#include "main.h"
/**
 *append_text_to_file - Function that creates a file.
 *@filename: Name of file to be created.
 *@text_content: content to be writen on to file.
 *Return: 1 success, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int ab;
	int bufleng;

	if (text_content == NULL)
		text_content = "";
	for (bufleng = 0; text_content[bufleng] != '\0'; bufleng++)
	{
	}
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR, 0600);
	if (fd < 0)
		return (-1);
	ab = write(fd, text_content, sizeof(char) * bufleng);
	if (ab < 0)
		return (-1);
	close(fd);
	return (1);
}
