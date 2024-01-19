#include "main.h"
/**
* ReadInput - read the input user
* Return: Return the input buffer
*/

char *ReadInput()
{
char *uinput = NULL;
size_t bufsize = 0;
int size;

size = getline(&uinput, &bufsize, stdin);

if (size == -1){
free(uinput);
exit(0);
}
uinput[strcspn(uinput, "\n")] = '\0';
free(uinput);
return (uinput);
}
