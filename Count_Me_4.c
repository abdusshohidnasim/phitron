#include <stdio.h>
#include <string.h>

int main()
{
    char A[100000];
    scanf("%s", &A);
    int lenth = strlen(A);
    for (char i = 'a'; i <= 'z'; i++)
    {
        int count = 0;
        for (int j = 0; j < lenth; j++)
        {
            if (A[j] == i)
            {
                count++;
            }
        }
        if (count >0)
        {
            printf("%c - %d\n", i, count);
        }
    }

    return 0;
}
