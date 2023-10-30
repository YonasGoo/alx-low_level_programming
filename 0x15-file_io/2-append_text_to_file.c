#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - Appends text
 * @filename: Name of file
 * @text_content: Text content
 * Return: success (1) failure (-1)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, open_flags;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	open_flags = 0_WRONLY | 0_APPEND;
	file_descriptor = open(filename, open_flags);
	if (file_descriptor == -1)
		return (-1);

	bytes_written = write(file_descriptor, text_content, strlen(text_content));
	if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
