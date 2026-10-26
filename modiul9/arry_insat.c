#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    int arry[input + 1];

    printf("%d \n", input);

    /// input

    // for (int i = 0; i <= input; i++)
    // {
    //     scanf("%d", &arry[i]);
    // }

    int index, number;

    scanf("%d %d",&index, &number);

    printf("%d %d naiem \n", index, number);

    // printf

    printf("%d ", arry[1]);

    // for (int i = 0; i < input; i++)
    // {
    //     printf("%d ,", arry[i]);
    // }
    // printf("\n");

    // for (int i = index; i <= input; i++)
    // {
    //     arry[i + 1] = arry[i];
    // }

    // arry[index] = number;
    // for (int i = 1; i < input; i++)
    // {
    //     printf("%d ,", arry[i]);
    // }

    return 0;
}
