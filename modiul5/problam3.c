
/*

P. First digit !
time limit per test0.25 seconds
memory limit per test64 megabytes
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".
*/


#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int demolenth = a;
    int lenth = 1;
    int lestdegit = 1;
    for (int i = 1; demolenth != 0; i++)
    {
        demolenth = demolenth / 10;
        lenth = i;
        //  printf("%d \n", a);
    }
    // printf("lenth %d", lenth);
    for (int i = 1; i < lenth; i++)
    {

        a = a / 10;
    }
    // printf("lest degit%d",a);
    if (a % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}
