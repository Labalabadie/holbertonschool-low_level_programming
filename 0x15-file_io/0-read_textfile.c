#include "main.h"
/**
 *read_textfile - A func that reads a txt file and prints it to POSIX stdout.
 *@filename: Name of the file in argv.
 *@letters: Number of char to be printed.
 *Return: 0 if requirement not encountered, else nro of char printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ab;
	int cd;
	int fd;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd < 0 || filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	ab = read(fd, buf, letters);
	cd = write(STDOUT_FILENO, buf, ab);
	close(fd);
	free(buf);
	if (ab < 0)
		return (0);
	return (cd);
}
