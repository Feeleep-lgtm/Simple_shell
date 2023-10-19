#ifndef SHELL.H
#define SHELL.H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>


void display_prompter(void);
void print_function(const char *word);
void command_reader(char *command, size_t size);
void command_exec(const char *command);


#endif
