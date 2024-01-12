#include "main.h"
/**
 * simple_shell - shell
 * return: Always 0
*/

int main()
{
    while (1)
    {
    if (isatty(STDIN_FILENO) == 1)
    printf("shelli_^-^");
    }
return (0);
}