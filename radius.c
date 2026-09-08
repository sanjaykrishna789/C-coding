#include <stdio.h>

int main() {
    float radius, area;

    printf("Enter the radius  of the circle: ");
    scanf("%f", &radius);
    area=2*3.14*radius;

    printf("The radius of the circle is:  %.2f", radius);
    printf("Area of the circle:%f",area);

    return 0;
}
