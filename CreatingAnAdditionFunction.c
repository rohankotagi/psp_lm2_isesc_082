#include<stdio.h>
int input1()
{
    int a;
    printf("Enter 1st number to be added");
    scanf("%d", &a);
    return a;
}
int input2()
{
    int b;
    printf("Enter 2nd number to be added");
    scanf("%d", &b);
    return b ;
}

int add(int a, int b)
{
    int sum;
    sum= a+b;
    return sum;
}

void output(int a, int b, int sum)
{
    printf("Sum of %d and %d is %d", a, b, sum);
}

int main(){
    int a, b, sum;
    a=input1();
    b=input2();
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}
