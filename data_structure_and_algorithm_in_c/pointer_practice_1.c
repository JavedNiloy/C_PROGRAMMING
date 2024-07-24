#include <stdio.h>

int main(void){
    int *p, q;
    p = &q; /* Get q's address */
    *p = 199; /* Assigning value to q's address */
    printf("%d", q); /* Printing q's address */

    return 0;
}