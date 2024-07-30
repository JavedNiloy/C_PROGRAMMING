#include <stdio.h>
#include <math.h>

int main(){
    double s, a, b, c, peri, area;
    scanf("%lf %lf %lf", &a, &b, &c);
    peri = a + b + c;
    s = 0.5*peri;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area: %lf", area);
    return 0;
}