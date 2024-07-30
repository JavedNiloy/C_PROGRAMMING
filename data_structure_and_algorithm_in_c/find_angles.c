#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, A, B, C, a_sqr, b_sqr, c_sqr, to_degs;
    scanf("%lf %lf %lf", &a, &b, &c);
    a_sqr = pow(a,2);
    b_sqr = pow(b,2);
    c_sqr = pow(c,2);
    to_degs = 180/acos(-1);
    A = acos((b_sqr+c_sqr-a_sqr)/(2*b*c));
    B = acos((c_sqr+a_sqr-b_sqr)/(2*c*a));
    C = acos((a_sqr+b_sqr-c_sqr)/(2*a*b));
    printf("A: %lf, B: %lf, C: %lf", A*to_degs, B*to_degs, C*to_degs);
    return 0;
}