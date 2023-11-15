#include "simple_shell.h"
/**
 * _bd_getenv - retrieves the value of an environment variable based on the
 * provided environment variable name
 * @env_identifier: pointer to a string representing the identifier or name
 * of the environment variable to retrieve
 * Return: a pointer to a string of env variables
*/
char *_bd_getenv(const char *env_identifier)
{
	char *current_env_dupl, *env;
	int k = 0;
	char *env_labl, *env_attri;

	while (environ[k])
	{
		current_env_dupl = _bd_strdup(environ[k]);
		env_labl = strtok(current_env_dupl, "=");
		if (_bd_strcmp(env_labl, env_identifier) == 0)
		{
			env_attri = strtok(NULL, "\n");
			env = _bd_strdup(env_attri);
			free(current_env_dupl);
			return (env);
		}
		free(current_env_dupl);
		current_env_dupl = NULL;
		k++;
	}
	return (NULL);
}
