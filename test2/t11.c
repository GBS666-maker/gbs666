#include <stdio.h>
#define PI 3.1415926535
int main() {
    float radius = 5.0f;
    float circumference, area;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Circumference: %.3f\n", circumference);
    printf("Area: %.3f\n", area);
    return 0;
}