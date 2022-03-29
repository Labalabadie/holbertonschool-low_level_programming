#include "main.h"
/**
 *
 *
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int bufleng;

	for (bufleng = 0; text_content[bufleng] != '\0'; bufleng++)
	{
	}

	if (filename == NULL)
		return(-1);

	fd = open(filename, O_CREAT | O_RDWR, 0600);
	write(fd, text_content, sizeof(char)* bufleng);
	close(fd);
	return(1);
}
