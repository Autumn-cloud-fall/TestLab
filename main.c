#include <stdio.h>

int main()
{   
    int a, b;
    printf("Hello, World! Welcome to C programming\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d + %d is %d\n", a, b, a + b);
    return 0;
}