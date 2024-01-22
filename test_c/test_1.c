#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

char *tmp=NULL;
tmp = malloc(100 );
int len =16;
tmp[len] = '\0';
free(tmp);
}