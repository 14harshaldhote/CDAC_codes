#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[90];
    char sen[90];
    
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);//“%[^\n]s”,&
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);

    
    return 0;
}
