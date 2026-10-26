#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int a = input;

    int arry[input];

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arry[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (i < a)
        {
            int tamp = arry[a - 1];
            arry[a] = arry[i];
            arry[i] = tamp;
            a--;
        }
    }

    for (int i = 0; i <= input; i++)
    {
        printf("%d ", arry[i]);
    }

    return 0;
}
