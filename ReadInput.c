#include "main.h"
/**
* ReadInput - read the input user
* Return: Return the input buffer
*/

int ReadInput()
{
char *input = NULL;
size_t bufsize = 0;
int size;

size = getline(&input, &bufsize, stdin);

return (size);
}