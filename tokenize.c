#include "main.h"

/**
 * tokenize -  splits a string into smaller parts.
 * @uinput: Commands received from the user.
 * @stoken: store the tokens.
 * Return: return the number of tokens.
*/
int tokenize(char *uinput, char *stoken[])
{
char *delim = " ";
char *token;
int count = 0;

token = strtok(uinput, delim);

while (token)
{
stoken[count++] = token;
token = strtok(NULL, delim);
}
return (count);
}
