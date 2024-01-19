#ifndef MAIN_H
#define MAIN_H

/*----LIBRARIES----*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

#define MAX_ARGS 1024

/*---PROTOTYPES---*/
int ReadInput();
int tokenize(char *command, char *stoken[]);
int exeCommand(char **stoken);
char *spath(char *excommand);

#endif
