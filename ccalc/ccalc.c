#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");
    char userChoice;
    float answer;

    do
    {
        printf("Welcome to CCalc!.\n");

        printf("a. Calculator\n");
        printf("b. Weight Converter\n");
        printf("c. Temp Convert\n");
        printf("d. Compound Calculator\n");
        printf("e. Circle Calculator\n");
        printf("x. Exit\n");

        scanf(" %c", &userChoice);

        if (userChoice == 'x') {
            printf("Thanks for using!");
        }
        else {
            if (userChoice == 'a') {
                char operator;
                double num1;
                double num2;
                double answer;
                
                wprintf("Choose your operator: (+) (-) (/) (x) (^) (\u221A - type 's')");
                scanf(" %c", &operator);

                if (operator == 's') {
                    printf("Enter the number to be square rooted? ");
                    scanf("%lf", &num1);

                    answer = sqrt(num1);
                    printf("Answer: %lf");
                } else
                {
                    /* code */
                    if (operator == '+') {
                        printf("Number 1: ");
                        scanf("%lf", &num1);
                        
                        printf("Number 2: ");
                        scanf("%lf", &num2);

                        answer = num1 + num2;
                        printf("Answer: ");
                    }
                    if (operator == '-') {
                        printf("Number 1: ");
                        scanf("%lf", &num1);
                        
                        printf("Number 2: ");
                        scanf("%lf", &num2);

                        answer = num1 - num2;
                        printf("Answer: ");
                    }
                    if (operator == '/') {
                        printf("Number 1: ");
                        scanf("%lf", &num1);
                        
                        printf("Number 2: ");
                        scanf("%lf", &num2);

                        answer = num1 / num2;
                        printf("Answer: ");
                    }
                    if (operator == 'x') {
                        printf("Number 1: ");
                        scanf("%lf", &num1);
                        
                        printf("Number 2: ");
                        scanf("%lf", &num2);

                        answer = num1 * num2;
                        printf("Answer: ");
                    }
                    if (operator == '^') {
                        printf("Number 1: ");
                        scanf("%lf", &num1);
                        
                        printf("Number 2: ");
                        scanf("%lf", &num2);

                        answer = pow(num1, num2);
                        printf("Answer: ");
                    }
                }
            } 
            else if (userChoice == "b")
            {
                /* code */
            }
            else {
                printf("Type a, b, c, d, e or x to select an option!");
            }
        }
    } while (userChoice != 'x');
    

    return 0;
}