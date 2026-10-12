/*
K. Max and Min
time limit per test0.25 seconds
memory limit per test64 megabytes
Given 3 numbers A, B and C, Print the minimum and the maximum numbers.

Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.
*/

 #include <stdio.h>
int main()
{
    long long int A, B, C;
    scanf("%lld %lld %lld ", &A, &B, &C);

    if (B >= A && C >= A)
    {
        printf("%lld", A);
    }
    else if (A >= B && C >= B)
    {
        printf("%lld", B);
    }
    else
    {
        printf("%lld", C);
    }

    // big
    if (A >= B && A >= C)
    {
        printf("%lld ", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%lld ", B);
    }
    else
    {
        printf("%lld ", C);
    }

    return 0;
}
