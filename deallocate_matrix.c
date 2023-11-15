#include "simple_shell.h"
/**
 * deallocate_matrix - responsible for deallocating memory
 * allocatedfor an array of character pointers.
 * @matrix: representing an array of character pointers
 * Return: always void
*/
void deallocate_matrix(char **matrix)
{
	int k = 0;

	if (!matrix)
	{
		return;
	}
	while (matrix[k])
	{
		free(matrix[k]);
		matrix[k] = NULL;
		k++;
	}
	free(matrix);
	matrix = NULL;
}
