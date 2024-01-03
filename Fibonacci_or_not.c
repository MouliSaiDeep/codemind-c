#include <stdio.h>
int isFibonacci(int num) {
    int a = 0, b = 1, temp;

    while (a <= num) 
    {
        if (a == num)
        {
            return 1;
        }
        temp = a;
        a = b;
        b = temp + b;
    }

    return 0;
}
int main() 
{
    int num;
    scanf("%d", &num);
    if (isFibonacci(num))
    {
        printf("True");
    } else {
        printf("False");
    }
    return 0;
}
