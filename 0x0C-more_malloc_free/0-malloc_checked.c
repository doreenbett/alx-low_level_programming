#include "main.h"
/**
*malloc_checked - function that allocates memory using malloc
*@b: inteer value
*
*/
void *malloc_checked(unsigned int b)
{
        int *p;

        p = malloc(sizeof(int) * 98);
        if (b == NULL)
                exit (0);
        return (98);
}
