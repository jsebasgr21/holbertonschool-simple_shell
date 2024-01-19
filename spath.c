#include "main.h"

/**
 * spath - search the path
*/

char *spath(char *excommand)
{
char *path = getenv("PATH");
char *pathcpy, *delim, *rute = NULL;

pathcpy = strdup(path);

if (pathcpy == NULL)
{
return (NULL);
}

delim = strtok(pathcpy, ":");

while (delim != NULL)
{
rute = malloc(strlen(delim) + strlen(excommand) + 2);

if (rute == NULL)
{
free(pathcpy);
return (NULL);
}

sprintf(rute, "%s/%s", delim, excommand);

if (access(rute, X_OK) == 0)
{
free(pathcpy);
return (rute);
}

free(rute);
delim = strtok(NULL, ":");
}
free(pathcpy);
return (excommand);
}