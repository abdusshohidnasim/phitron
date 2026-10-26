
#include <stdio.h>
int main()
{
    int inputcount;
    long long int number1;
    long long int number2;
    long long int sum = 0;
    scanf("%d", &inputcount);
    for (int i = 1; i <= inputcount; i++)
    {
        sum = 0;
        scanf("%lld %lld", &number1, &number2);
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
            while ( number2 < number1)
            {

                if (number2 % 2 != 0)
                {
                    sum += number2;

                }
                number2++;
            }
        }
        printf("%lld\n", sum);
    }

    return 0;
}
