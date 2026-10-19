/*
For more clarification see the example below.

Constraints
1 <= N <=10

Input format
Only one line containing a number N .

Output Format
Print the answer according to the required above

Sample Input 1
6
Sample Output 1
A
B B
C C C
D D D D
E E E E E
F F F F F F
*/

#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    int a = 65;
    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", a);
        }
        a = a + 1;
        printf("\n");
    }

    return 0;
}
