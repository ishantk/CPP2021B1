#include<stdio.h>

void swapAgain(int* x, int* y){  
    printf("*x is: %d\n", *x);
    printf("*y is: %d\n", *y);

    //*x = *x + *y;  // 30
    //*y = *x - *y;  // 10
    //*x = *x - *y;  // 20 

    *x = *x * *y;  // 200
    *y = *x / *y;  // 10
    *x = *x / *y;  // 20

}

int main(){

    int array[5];

    int x = 10;
    printf("Hello All. This is C\n");
    printf("x is: %d \n", x);

    printf("Enter a new value for x: ");
    scanf("%d", &x);

    printf("x now is: %d \n", x);

    int a = 10;
    int b = 20;

    swapAgain(&a, &b);

    printf("a is: %d\n", a);
    printf("b is: %d\n", b);

    return 0;
}