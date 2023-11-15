#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <sys/stat.h>

extern char **environ;

#define sub_string_seperator " \t\n"
/** function prototyps */
int correlative_command_cycle(char **argv);
char *peruse_user_input(void);
int inst_sequence_exec(char **instruction, char **argv);
char **lexical_analyzer(char *user_input);
void deallocate_matrix(char **matrix);
char **split_user_input(char *user_input, int sub_string_count);
int compute_substrings(char *user_input);
void _bd_present_prompt(void);
void _bd_strip_newline(void);
int wait_child(pid_t subordinate_process, char **instruction, char **argv);

/** helper Tools functions */
ssize_t _bd_output(const char *transmit_data);
size_t _bd_strlen(const char *strn);
char *_bd_strdup(const char *strn);



#endif /*SIMPLE_SHELL_H*/
