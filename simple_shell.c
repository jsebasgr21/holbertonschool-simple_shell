#include "main.h"
/**
 * simple_shell - shell
 * return: return 0 if sucess
*/

int main()
{
int status = 0, num;
char *stoken[MAX_ARGS], *buffer;

while (1)
{
if (isatty(STDIN_FILENO) == 1)
printf("prompt$ ");
buffer = ReadInput();
printf("1%s", buffer);
num = tokenize(buffer, stoken);
printf("2%s", stoken[0]);
if (num > 0)
status = exeCommand(stoken);
}
return (status);
}
