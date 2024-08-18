#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    getchar();

    printf("%d\n%d\n%d\n%d\n%d\n", A+B, A-B, A*B, A/B, A%B);

    return 0;    
}