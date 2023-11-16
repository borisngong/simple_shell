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

int correlative_command_cycle(char **argv);
char *peruse_user_input(void);
int inst_sequence_exec(char **instruction, char **argv, int exec_id);
char **lexical_analyzer(char *user_input);
void deallocate_matrix(char **matrix);
char **split_user_input(char *user_input, int sub_string_count);
int compute_substrings(char *user_input);

/* Handle path */
char *retrieve_directory(char *base_dir, char *instruction, struct stat *sts);
char *nexus_path(char *base_dir, char *instruction);
char *locate_path_executable(char *instruction);

/* Tools */

ssize_t _bd_output(const char *transmit_data);
size_t _bd_strlen(const char *strn);
void _bd_present_prompt(void);
void _bd_strip_newline(void);
int _bd_strcmp(const char *strn1, const char *strn2);
char *_bd_strcat(char *destination, const char *source);
char *_bd_strdup(const char *strn);
char *_bd_getenv(const char *env_identifier);
char *_bd_itoa(int n_value);
void exec_executable_issue(char *program_name, char *instruction, int exec_id);
void invert_string_inplace(char *strn, int longii);
char *_bd_strcpy(char *destin, const char *srce);

/** builtins */
int validate_builtin_command(char *instruction);
void execute_builtin_command(char **instruction, char **argv, int exec_id, int *exec_status);
void display_environment(char **instruction, int *exec_status);
void quit_shell(char **instruction, char **argv, int exec_id, int *exec_status);
int validate_positive_integer(char *strn);
int _bd_atoi(char *strn);
void switch_dir(char **instruction, char **argv, int exec_id);

#endif /*SIMPLE_SHELL_H*/
