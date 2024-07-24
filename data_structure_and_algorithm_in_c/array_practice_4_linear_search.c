#include <stdio.h>

int main(){
    int arr[5];
    int i, j;

    printf("Enter five numbers: ");
    for (i=0; i<5; i++) scanf("%d", &arr[i]);
    printf("\n");

    for (i=0; i<5; i++){
        for (j=1; j<5; j++){
            if (arr[i]!=arr[j]){
                printf("arr[%d] != arr[%d]\n", i, j);
            }
            else printf("arr[%d] == arr[%d]\n", i, j);
        }
    } 
    return 0;
}