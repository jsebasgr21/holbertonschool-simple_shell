#include "main.h"
/**
* ReadInput - read the input user
* Return: Return the input buffer
*/

int ReadInput()
{
char *uinput = NULL, *stoken[MAX_ARGS];
size_t bufsize = 0;
int size;
int num;

size = getline(&uinput, &bufsize, stdin);

if (size == -1){
if (feof(stdin))
{
free(uinput);
perror("EXIT_SUCCESS\n");
exit(0);
}
else
{
perror("ERRROR TO READ INPUT");
free(uinput);
}
}

uinput[strcspn(uinput, "\n")] = '\0';
num = tokenize(uinput, stoken);

if (num > 0)
exeCommand(stoken);

free(uinput);
return (size);
}
