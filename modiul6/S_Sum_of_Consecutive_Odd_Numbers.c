/*
S. Sum of Consecutive Odd Numbers
time limit per test1 second
memory limit per test256 megabytes
Given two numbers X and Y. Print the sum of all odd numbers between them, excluding X and Y.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain two numbers X and Y (0 ≤ X, Y ≤ 104).

Output
Print the sum of all odd numbers between X and Y (excluding X and Y).

Example
InputCopy
3
5 6
10 4
4 9
OutputCopy
0
21
12


*/

#include <stdio.h>
int main()
{
    int inputcount;
    int number1;
    int number2;
    int sum = 0;
    scanf("%d", &inputcount);
    for (int i = 1; i <= 3; i++)
    {
        sum = 0;
        scanf("%d %d", &number1, &number2);
        if (number1 < number2)
        {
            number1 += 1;
            for (number1; number1 < number2; number1++)
            {
                if (number1 % 2 != 0)
                {
                    sum += number1;
                }
            }
        }
        else
        {
            number2 += 1;
            for (number2; number2 < number1; number2++)
            {

                if (number2 % 2 != 0)
                {
                    sum += number2;
                }
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
