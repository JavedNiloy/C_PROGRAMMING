#include <stdio.h>

int main(){
    int N=10, H, L;
    
    // scanf("Harry shot: %d", &H);
    // scanf("Larry shot: %d", &L);
    // printf("Did not shoot- H:%d, L:%d", (N-H), (N-L));

    scanf("%d %d", &H, &L);
    printf("Did not shoot- H:%d, L:%d", (N-H), (N-L));
    return 0;
}