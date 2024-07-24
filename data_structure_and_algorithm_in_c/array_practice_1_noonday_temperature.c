#include <stdio.h>

int main(){
    int days=5, temp[5], i, min, max, avg;
    
    for (i=0; i<days; i++){
        printf("enter noonday temperature for day %d: ", i);
        scanf("%d", &temp[i]);
    }

    avg=0;
    for (i=0; i<days; i++) avg = avg + temp[i];
    printf("average temperature: %d \n", avg/days);

    min = 200;
    max = 0;
    for (i=0; i<days; i++){
        /* what's the logic? */
        if (min > temp[i]) min = temp[i];
        if (max < temp[i]) max = temp[i];
    }
    
    printf("minimum temperature: %d \n", min);
    printf("maximum temperature: %d \n", max);

    return 0;
}