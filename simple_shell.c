#include "main.h"
/**
 * simple_shell - shell
 * return: return 0 if sucess
*/

int main()
{
int status = 0, num;
char *stoken[MAX_ARGS], *buffer;

while (status <= 1)
{

if (isatty(STDIN_FILENO) == 1)
{
printf("prompt$ ");
}

buffer = readInput();
num = tokenize(buffer, stoken);

if (num > 0)
status = exeCommand(stoken);
}
free(buffer);
return (status);
}
