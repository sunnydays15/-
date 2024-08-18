#include <stdio.h>

int main(){
    double A, B;
    scanf("%lf %lf", &A, &B);
    getchar();

    printf("%.10f\n", A/B);

    return 0;    
}