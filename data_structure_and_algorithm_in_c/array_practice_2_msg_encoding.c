#include <stdio.h>
#include <conio.h>

int main(){
    char msg[50];
    int i;

    printf("--------------------Enter msg less than 50 characters-------------\n");

    for (i=0; i<50; i++){
        msg[i]=getche();
        if (msg[i]=='\r') break;
    }
    printf("\n");

    for (i=0; msg[i]!='\r'; i++) printf("%c", msg[i]+1);

    return 0;
}