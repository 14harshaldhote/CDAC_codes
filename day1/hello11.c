#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char n[100];//="Welcome to C programming.";//char n[100];
    scanf("%[^\n]%*c",&n);
    printf("Hello, World!\n");
    printf("%s",n);
}
