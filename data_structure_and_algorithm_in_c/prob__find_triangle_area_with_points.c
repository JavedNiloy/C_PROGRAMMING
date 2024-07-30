#include <stdio.h>
#include <math.h>

int main(){
    int x[3], y[3], prods1[3], prods2[3], i;
    long int sum1=0, sum2=0;
    double area;
    for (i=0; i<3; i++){
        printf("x%d: ",i);
        scanf("%d", &x[i]);
        printf("\ny%d: ",i);
        scanf("%d", &y[i]);
    }
    for (i=0; i<3; i++){
        prods1[i] = x[i]*y[(i+1)%3];
        prods2[i] = y[i]*x[(i+1)%3];
    }
    for (i=0; i<3; i++){
        sum1 = sum1 + prods1[i];
        sum2 = sum2 + prods2[i];
    }
    area = 0.5*abs((sum1-sum2));
    printf("the area is: %lf", area);
    return 0;
}