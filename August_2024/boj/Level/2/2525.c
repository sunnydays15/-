#include <stdio.h>

int main(){

    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    getchar();

    int hour, minute;
    hour = C/60, minute = C%60;

    if(B + minute < 60){
        printf("%d %d", (A + hour)%24, B + minute);
    }
    else{
        printf("%d %d", (A + hour + 1)%24, B + minute - 60);
    }

    return 0;
}