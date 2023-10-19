#include "shell.h"

void print_function(const char *word)
{
	write(STDOUT_FILENO, word, strlen(word));
}

