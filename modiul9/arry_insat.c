#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);

    int a[input+1];

    printf("%d \n", input);

    /// input

    for (int i = 0; i < input; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < input; i++)
    {
        printf("%d ,",a[i]); 
    }
    
    int index, number;

    scanf("%d %d", &index, &number);


    printf("\n");

    for (int i = input+1; i >= index; i--)
    {
        a[i+1] = a[i];
    }

    a[index] = number;
    for (int i = 0; i <=input; i++)
    {
        printf("%d ,", a[i]);
    }

    return 0;
}
