#include "main.h"
/**
* ReadInput - read the input user
* Return: Return the input buffer
*/

int ReadInput()
{
char *uinput = NULL;
size_t bufsize = 0;
int size;

size = getline(&uinput, &bufsize, stdin);

if (size == -1){
if (feof(stdin))
{
free(uinput);
exit(0);
}
else
{
perror("ERRROR TO READ INPUT");
free(uinput);
}
}
uinput[strcspn(uinput, "\n")] = '\0';
free(uinput);
return (size);
}