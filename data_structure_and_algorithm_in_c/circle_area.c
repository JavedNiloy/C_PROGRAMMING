#include <stdio.h>
#include <math.h>

int main(){
    double r, area, pi;
    scanf("%lf", &r);
    area = acos(-1) * r * r;
    printf("the area of the circle is : %lf", area);
    return 0;
}