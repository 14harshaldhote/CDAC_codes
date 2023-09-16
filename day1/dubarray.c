#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int arr[20], i, j, k, size;  
      
    printf (" Define the number of elements in an array: ");  
    scanf (" %d", &size);  
      
    printf (" \n Enter %d elements of an array: \n ", size);   
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  


    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                for(int k=0; k<size-1;k++){
                    arr[k]=arr[k+1];

                }
                size--;
                j--;
            }
            
        }
    }
    printf (" \n Sorted array: \n ");
//     for ( i = 0; i < size; i++)  
//     {  
//         printf (" %d \t", arr[i]);  
//     }  
//     return 0;  
// }  
    for ( i = 0; i < size; i++)  
    {  
        printf (" %d \t", arr[i]);  
    }  
    return 0;  
}  
    
