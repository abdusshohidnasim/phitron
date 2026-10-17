/*
B. Even Numbers
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print all even numbers between 1 and N inclusive in separate lines.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print the answer according to the required above. If there are no even numbers print -1.

Examples
InputCopy
10
OutputCopy
2
4
6
8
10
InputCopy
5
OutputCopy
2
4
*/
#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N < 2)
    {
        printf("-1");
    }
    else
    {
        for (int i = 2; i <= N; i += 2)
        {

            printf("%d\n", i);
        }
    }

    return 0;
}
