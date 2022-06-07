#include <stdio.h>

int main()
{
    float length, width, radius, perimeter, area1, area2, circumference;

    /*
     * Input length and width of rectangle from user
     */
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    /* Calculate perimeter & area of the rectangle of rectangle */
    perimeter = 2 * (length + width);
    area1 = length*width;
    /* Calculate circumference & area of circle */
    circumference = 2*(3.14)*radius;
    area2 = 3.14*(radius*radius);

    /* Print perimeter & area of rectangle */
    printf("Perimeter of rectangle = %f units \n", perimeter);
    printf("Area of rectangle = %f units \n", area1);

    /* Print circumference & area of circle */
    printf("circumference of circle = %f units \n", circumference);
    printf("Area of circle = %f units \n", area2);

    return 0;
}
