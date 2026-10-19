/*

C. Even, Odd, Positive and Negative
time limit per test1 second
memory limit per test256 megabytes
Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 103) number of values.

Second line contains N numbers (-105 ≤ Xi ≤ 105).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

Example
InputCopy
5
-5 0 -3 -4 12
OutputCopy
Even: 3
Odd: 2
Positive: 1
Negative: 3
Note
First Example :

Even Numbers are : 0, -4 , 12

Odd Numbers are : -5 , -3

Positive Numbers are : 12

Negative Numbers are : -5 , -3 , -4



*/

#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int number, event = 0, odd = 0, positive = 0, Negative = 0;

    for (int i = 1; i <= input; i++)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            event++;
        }
        else
        {
            odd++;
        }
        if (0 < number)
        {
            positive++;
        }
        else if (0 > number)
        {
            Negative++;
        }
    }
    printf("Even: %d\n", event);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", Negative);

    return 0;
}
