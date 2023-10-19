#include "shell.h"

void command_reader(char *command, size_t size)
{
	if (fgets(command, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			print_function("\n");
			exit(EXIT_SUCCESS)'
		}
		else
		{
			ptint_function("Error occured reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}
