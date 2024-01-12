#include "main.h"
/**
* ReadInput - read the input user
* Return: Return the input buffer
*/

char *Read_Input()
{
char *input = NULL;
size_t bufsize = 0;

{
if (getline(&input, &bufsize, stdin) == -1)
{
free(input);
exit(EXIT_FAILURE);
}
return (input);
}
}