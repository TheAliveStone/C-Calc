#include <stdio.h>
#include <math.h>

int main(void) {
    char userChoice;
    int temp;
    
    do
    {
        printf("Welcome to the TEMPERATURE CONVERTER.\n");

        printf("a. Celcius to Fahrenheit\n");
        printf("b. Fahrenheit to Celcius\n");
        printf("c. Celcius to Kelvin\n");
        printf("d. Kelvin to Celcius\n");
        printf("e. Fahrenheit to Kelvin\n");
        printf("f. Kelvin to Fahrenheit\n");
        printf("x. Exit\n");

        scanf(" %c", &userChoice);

        if (userChoice == 'x') {
            printf("Thanks for using!");
        }
        else {
            if (userChoice == 'a') {
                printf("Enter the temperature in Celcius: ");
                scanf("%d", &temp);

                double fahrenheit = (temp * (9.0 / 5.0)) + 32;
                printf("The temperature in fahrenheit is %.0f\n", floor(fahrenheit));
            }
            else if (userChoice == 'b') {
                printf("Enter the temperature in Fahrenheit: ");
                scanf("%d", &temp);
                
                double celcius = (temp - 32) * (5.0 / 9.0);
                printf("The temperature in celcius is %.0f\n", floor(celcius));
            }
            else if (userChoice == 'c') {
                printf("Enter the temperature in Celcius: ");
                scanf("%d", &temp);

                double kelvin = temp + 273.15;
                printf("The temperature in kelvin is %.0f\n", floor(kelvin));
            }
            else if (userChoice == 'd') {
                printf("Enter the temperature in Kelvin: ");
                scanf("%d", &temp);

                double celcius = temp - 273.15;
                printf("The temperature in celcius is %.0f\n", floor(celcius));
            }
            else if (userChoice == 'e') {
                printf("Enter the temperature in Fahrenheit: ");
                scanf("%d", &temp);

                double kelvin = ((temp - 32) * (5.0 / 9.0)) + 273.15;
                printf("The temperature in kelvin is %.0f\n", floor(kelvin));
            }
            else if (userChoice == 'f') {
                printf("Enter the temperature in Kelvin: ");
                scanf("%d", &temp);

                double fahrenheit = ((temp - 273.15) * (9.0 / 5.0)) + 32;
                printf("The temperature in fahrenheit is %.0f\n", floor(fahrenheit));
            }
            else {
                printf("Type a, b, c, d, e, f or x to select an option!");
            }
        }
    } while (userChoice != 'x');
    return 0;
}