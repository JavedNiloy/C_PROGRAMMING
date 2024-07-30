#include <stdio.h>
#include <math.h>

int main(){
    double dist, x1, x2, y1, y2;
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    dist = sqrt(pow((x1-x2), 2)+pow((y1-y2), 2));
    printf("the distance is: %lf", dist);
    return 0;
}