#include <stdio.h>

int main(void) {
    char userChoice;
    float weight;

    do
    {
        printf("Welcome to the WEIGHT CONVERTER.\n");

        printf("a. kg to lb\n");
        printf("b. lb to kg\n");
        printf("x. Exit\n");

        scanf(" %c", &userChoice);

        if (userChoice == 'x') {
            printf("Thanks for using!");
        }
        else {
            if (userChoice == 'a') {
                printf("Enter the weight in kg: ");
                scanf("%f", &weight);

                double pounds = weight * 2.2046226218;
                printf("The weight in lb is %lf\n", pounds);

            }
            else if (userChoice =='b') {
                printf("Enter the weight in lb: ");
                scanf("%f", &weight);
                
                double kilos = weight / 2.204622621;
                printf("The weight in kg is %lf\n", kilos);
            }
            else {
                printf("Type a, b or x to select an option!");
            }
        }
    } while (userChoice != 'x');
    

    return 0;
}