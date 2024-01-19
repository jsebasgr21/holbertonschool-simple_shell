#include "main.h"
/**
 * 
*/

int checkfunc(char *buffer)
{
if (strcmp(buffer, "exit") == 0)
{
free(buffer);
exit(2);
}

if (strcmp(buffer, "env") == 0 || strcmp(buffer, "printenv") == 0)
{
int i = 0;
char **env = environ;

for (i = 0; env[i] != NULL; i++)
{
printf("%s\n", env[i]);
}
}
return (0);
}