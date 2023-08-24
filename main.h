#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>
#include <signal.h>

extern char **environ;


int check_cmd_exists(char **arg);
int execute_cmd(char **arg, char *input_buff);
int handle_built_in(char **arg, char *input_buff, int exit_num);
char **tokenize_input(char *input_buff);
int count_spaces_tabs(char *str);
ssize_t ReadUser_input(char **input_buff, size_t *buff_size);
int execute_forked_cmd(char **arg, char *input_buff);
int validate_cmd(char **arg, char *input_buff, int exit_num);
void free_arg(char **arg);
void handle_sign(int sign);


int shell_strlen(char *str);
int shell_strcmp(char *str1, char *str2);
char *shell_sprintf(char *str, char *d, char *sc);
char *shell_strcat(char *des, char *sr);
char *shell_strcpy(char *des, char *sr);

#endif
