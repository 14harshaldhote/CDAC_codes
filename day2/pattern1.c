#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 2 * (a - i) - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}