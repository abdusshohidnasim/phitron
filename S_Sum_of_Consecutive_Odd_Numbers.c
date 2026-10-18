
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
            while (number1 < number2)
            {
                if (number1 % 2 != 0)
                {
                    sum += number1;
                }
                number1++;
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
