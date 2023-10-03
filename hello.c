#include <stdio.h>
#include "cs50.h"
#include <stdlib.h>
int calculate()
{
    system("cls");
    char opt = get_char(" input your opration + - / * ");
    int num1 = get_int("input your first number");
    int num2 = get_int("input your secound number");
    float result;
    switch (opt)
    {
    case '+':
        result = num1 + num2;
        printf(" Addition %d %d is %.2f", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf(" Subtraction %d %d is %.2f", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf(" Multiplication %d %d is %.2f", num1, num2, result);
        break;

    case '/':
        if (num2 == 0)
        {
            printf(" \n You cannot divide by zero. Please enter another number. ");
            scanf("%d", &num2);
        }
        result = num1 / num2;
        printf(" Division %d %d is %.2f", num1, num2, +result);
        break;
    default:
        printf(" Enter the following operators only: +, -, *, / ");
    }
}
int binaryGenerator()
{
    int a[10];
    int n =  get_int("Enter the number to convert:");
    int i;
    system("cls");
    for (i = 0; n >= 1; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of Given Number is=");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}
int main()
{
    char opration = get_char("select the oration \n 1=calculator \n 2=binary to heximal\n");
    switch (opration)
    {
    case '1':
        calculate();
        break;

    case '2':
        binaryGenerator();
    }
}