#include "main.h"

/**
 * append_text_to_file - file to be appended at the end,
 * @filename: file name pointer,
 * @text_content: file add string at the end,
 *
 * Return: function fails --1,
 * or filename is NULL - -1.
 * else, if there is an nonexsitent file, user lacks write permissions - -1.
 * Or - 1.
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
