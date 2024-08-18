#include <stdio.h>

int main(){
    int num1; 
    int num2;
    scanf("%d %d", &num1, &num2);
    getchar();

    int c1 = num2%10;
    int c2 = ((num2 - c1)/10)%10;
    int c3 = num2/100;

    printf("%d\n%d\n%d\n%d\n", num1*c1, num1*c2, num1*c3, num1*num2);

    return 0;
}