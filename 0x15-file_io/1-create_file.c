#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - Creates a file with specified permissions
 * @filename: Name of the file
 * @text_content: Text content to write
 * Retrun: success (1), failure (-1)
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, open_flags, file_permissions;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	file_permissions = S_IRUSR | S_IWUSR;
	open_flags = O_CREAT | O_WRONLY | O_TRUNC;

	file_descriptor = open(filename, open_flags, file_permissions);
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
