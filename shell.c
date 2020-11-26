#include "header.h"

/**
 * main - minishell.
 * Return: Always 0 to succes
 */

int main(void)
{
	size_t nbytes = 0;
	int num = 0, count_w = 0;
	char *buffer = NULL, **array = NULL, *token = NULL;
	char *close[] = {"exit", NULL};

	if (isatty(STDIN_FILENO) != 0)
		write(STDOUT_FILENO, "¥ minishell ¶: ", 16);

	signal(SIGINT, _ctrl_c);
	while ((num = getline(&buffer, &nbytes, stdin)) != -1 && ++count_w)
	{
		if (num != 1)
		{
			buffer[num - 1] = '\0';
			if (_print_env(buffer) == -1)
			{
				if (_strcmp(buffer, close[0]) == 0)
					free(buffer), exit(98);

				array = _split_string(buffer, " ");
				token = _token(array);
				if (token == NULL)
					token = array[0];

				_exec(count_w, token, array);
			}
		}
		if (isatty(STDIN_FILENO) != 0)
			write(STDOUT_FILENO, "¥ minishell ¶: ", 16);
	}
	if (isatty(STDIN_FILENO) != 0)
	write(STDOUT_FILENO, "\n", 1);
	free(buffer);
	return (0);
}
