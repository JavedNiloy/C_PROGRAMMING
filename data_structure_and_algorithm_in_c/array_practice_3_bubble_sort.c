#include <stdio.h>

int main(){
    long int item[4];
    long int n=4, i, j, t;

    printf("ENTER FOUR NUMBERS: ");
    for (i=0; i<n; i++) scanf("%d", &item[i]);

    printf("\n ------SORTING------\n");

    for (i=0; i<n; i++) {
        for (j=0; j<n; j++){
            if (item[j+1] > item[j]){
                t = item[j];
                item[j] = item[j+1];
                item[j+1] = t;
            }
        }
        printf("%d ", item[i]);
    }

    return 0;
}