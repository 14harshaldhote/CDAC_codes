// // WAP generate bill icecream parlor, : name flavour items qunatatiy GST 18%
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // int main(){
// //     char name[100];
// //     char flavour[100];
// //     int quantity;
// //     float price;
// //     float gst;

// //     printf("Enter Your Name : ");
// //     scanf("%s", name);
// //     printf("Enter Your Flavour : ");
// //     scanf("%s", flavour);
// //     printf("Enter Your Quantity : ");
// //     scanf("%d", &quantity);
// //     printf("Enter Your Price : ");
// //     scanf("%f", &price);

// //     gst = (price * 18) / 100;
// //     price = price + gst;
// //     printf("Your Name Please : ");
// //     scanf("%s",&name);
// int main()
// {
//     char name[100];
//     int flavour;
//     int quantity;
//     int price;
//     int gst;

//     printf("Enter Your Name :\n ");
//     scanf("%s", name);
//     printf("Enter Your Flavour \n 1.Mango\n 2.Sitafal\n 3.BlueBerry: \n");
//     scanf("%d",&flavour);
    

//     switch (flavour)
//     {
//         {
//         case 1:
//             printf("Mango");
//             price = 80;
//             break;
//         case 2:
//             printf("Sitafal");
//             price = 100;
//             break;
//         case 3:
//             printf("BlueBerry");
//             price = 145;
//             break;

//         default:
//             printf("Invalid Flavour\n");
//             return 0;
//             break;
            
//         }
//     }
//     printf("Number of ice-cream\n : ");
//     scanf("%d",&quantity);
    
//     int Newprice = price * quantity;

//     gst = Newprice * (0.18);
//     int finalPrice = Newprice + gst;

//     printf("Your Name-----------------------%s\n",name);
//     printf("Flavoue------------------------%d\n",flavour);// add flavour name
//     printf("Quantity--------------------------%d\n",quantity);
//     printf("Price-----------------------------%d\n",Newprice);
//     printf("GST------------------------------%d\n",gst);
//     printf("TotalAmount------------------------------%d\n",finalPrice);
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main() {
    char name[100];
    int choice;
    int quantity;
    int gst;
    int totalAmount = 0;

    printf("Enter Your Name: ");
    scanf("%s", name);

    while (1) {
        printf("Choose Ice Cream Flavor:\n");
        printf("1. Mango\n2. Sitafal\n3. BlueBerry\n4. Done\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            break; 
        } else if (choice < 1 || choice > 3) {
            printf("Invalid Flavour Choice\n");
            continue; 
        }

        int price;
        char flavorName[20];

        switch (choice) {
            case 1:
                strcpy(flavorName, "Mango");
                price = 80;
                break;
            case 2:
                strcpy(flavorName, "Sitafal");
                price = 100;
                break;
            case 3:
                strcpy(flavorName, "BlueBerry");
                price = 145;
                break;
            default:
                break;
        }

        printf("Enter Quantity: ");
        scanf("%d", &quantity);

        int subTotal = price * quantity;
        gst = subTotal * 0.18;
        int finalPrice = subTotal + gst;

        printf("Flavor: %s\n", flavorName);
        printf("Quantity: %d\n", quantity);
        printf("Price per ice cream: %d\n", price);
        printf("Subtotal: %d\n", subTotal);
        printf("GST: %d\n", gst);
        printf("Total for this flavor: %d\n", finalPrice);

        totalAmount += finalPrice;
    }

    printf("\nYour Name: %s\n", name);
    printf("Total Amount: %d\n", totalAmount);

    return 0;
}
