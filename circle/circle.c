#include <stdio.h>
#include <math.h>


int main() {

    const double PI = 3.14159265358979323846;
    double radius;
    double area;
    double surfaceArea;
    double volume;
    double circumference;
    char isSphere;

    printf("Is your circle 3D? (y or n) \n");
    scanf(" %c", &isSphere);

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    if (isSphere == 'y') {
        surfaceArea = 4 * PI * pow(radius, 2);
        printf("The surface area is %.2lf.", surfaceArea);

        volume = (4.0 / 3.0) * PI * pow(radius, 3);
        printf("The volume is %.2lf.", volume);

        circumference = 2 * PI * radius;
        printf("The circumference is %.2lf", circumference);
    }

    else {
        area = PI * pow(radius, 2);
        printf("The area is %.2lf.\n", area);

        circumference = 2 * PI * radius;
        printf("The circumference is %.2lf", circumference);
    }
    return 0;
}