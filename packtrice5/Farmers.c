#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);
    int M1, M2, D;
    for (int i = 0; i < N; i++)
    {
        int kamla1 = 0;
        int totalsomoy = 0;
        int m2 = 0;
        scanf("%d %d %d", &M1, &M2, &D);
        kamla1 = M1 * D;
        // printf("%d",kamla1);
        m2 = M1 + M2;
        totalsomoy = kamla1 / m2;
        // printf("%dkamnal \n",totalsomoy);
        printf("%d\n", D - totalsomoy);
    }

    return 0;
}
