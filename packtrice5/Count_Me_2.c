#include <stdio.h>
#include <string.h>
int main()
{
    char A[100000];
    scanf("%s", &A);
    int lenth = strlen(A);
    int count = 0;
    int s = 0;
    for (int i = 0; i < lenth; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
        }
        else
        {
            if (A[i] == 's')
            {
                s = 1;
            }

            count++;
        }
    }
    if (s == 1)
    {
        printf("%d", count);
    }
    else
    {
        printf("0");
    }

    return 0;
}
