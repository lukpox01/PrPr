#include <stdio.h>
#include <math.h>

int main(void) {
    double area;

    scanf("%lf", &area);

    double square_side = sqrt(area);
    double circle_radius = sqrt(area / M_PI);
    double square_perimeter = 4 * square_side;
    double circle_circumference = 2* M_PI * circle_radius;


    printf("A square with an area of %lf m^2 has a side length of %lf m\n", area, square_side);
    printf("A circle with an area of %lf m^2 has a radius of %lf m\n", area, circle_radius);
    printf("The perimeter of the square is %lf.\n", square_perimeter);
    printf("The circumference of the circle is %lf.\n.", circle_circumference);

    return 0;
}

// A square with an area of 20.5000 m^2 has a side length of  4.5277 m.
// A circle with an area of 20.5000 m^2 has a radius of 2.5545 m.
// The perimeter of the square is 18.1108.
// The circumference of the circle is 16.0503.
