#include "simple_shell.h"
/**
*_bd_output - takes string as an input and writes
* to stdout
* @transmit_data: string contents to be writen to stdout
* Return: Always void
*/
ssize_t _bd_output(const char *transmit_data)
{
	size_t data_length;
	ssize_t bytes_written;

	data_length = _bd_strlen(transmit_data);
	bytes_written = write(STDOUT_FILENO, transmit_data, data_length);

	return (bytes_written);
}
