#include <stdio.h>
int main()
{
    int a[3][3], i, j, sum = 0;
    printf("enter the matrix elements\n");
    ;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
               
        }
        printf("\n");
    
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
        {
            if((i+j)==1 || (i+j==3) ){

                sum=sum+a[i][j];
                }
            /* code */
        }
        
    }
    printf("\nsum of diagonal elements: %d", sum);
   
    
    

    

    
}