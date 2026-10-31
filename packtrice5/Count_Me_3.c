#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char A[200];

    
    for (int i = 0; i < n; i++)
    {
        int capital = 0, digit = 0, small = 0;
        scanf("%s", &A);
        int lenthl = strlen(A);
        for (int i = 0; i < lenthl; i++)
        {
            if (A[i] >= 'A'&& A[i] <= 'Z')
            {
                capital++;
            }
            else if (A[i] >= 'a'&& A[i] <= 'z')
            {
                small++;
            }
            else if (A[i] >= '0' && A[i] <= '9')
            {
                digit++;
            }
        }
        printf("%d %d %d\n", capital, small,digit );
    }

    return 0;
}
