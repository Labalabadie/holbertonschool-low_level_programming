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
	int ab;
	int bufleng;

	if (! text_content)
		text_content = '\0';

	for (bufleng = 0; text_content[bufleng] != '\0'; bufleng++)
	{
	}

	if (filename == NULL)
		return(-1);

	fd = open(filename, O_CREAT | O_RDWR, 0600);
	if (fd < 0)
		return(-1);
	ab = write(fd, text_content, sizeof(char)* bufleng);
	if (ab < 0)
		return(-1);
	close(fd);
	return(1);
}
