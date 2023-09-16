// // #include<stdio.h>
// // int main(){
// //     int a;
// //     int array[]={2,66,3,22,7,11,13,12,9};
// //     printf("Enter elemt: ");
// //     scanf("%d",&a);
// //     for(int i=0;i<=a;i++){
// //         if(array[i]==a){
// //             printf("%d is present at index %d",a,i);
            
// //         }else printf("%d is not present at index \n ",a);

// // }}
// #include <stdio.h>

// int main() {
//     int a;
//     int array[] = {2, 66, 3, 22, 7, 11, 13, 12, 9};
//     int found = 0; 
//     printf("Enter element: ");
//     scanf("%d", &a);

//     for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
//         if (array[i] == a) {
//             printf("%d is present at index %d\n", a, i);
//             found = 1; 
//             break;     
//         }
//     }

//     if (!found) {
//         printf("%d is not present in the array\n", a);
//     }

//     return 0;
// }

// #include <stdio.h>
 
// int main() {
//     int arr[] = {2, 4, 6, 10, 1, 99, 20,59,11};
//     int x ;
//     scanf("%d", &x);
     
//     int arrLen = sizeof arr / sizeof arr[0];
//     int index = -1;
     
//     for (int i = 0; i < arrLen; i++) {
//         if (arr[i] == x) {
//             index = i;
//             break;
//         }
//     }
     
//     if (index > -1) {
//         printf("Index : %d\n", index);
//     } else {
//         printf("%d is not present in this array.\n", x);
//     }
     
//     return 0;
// }