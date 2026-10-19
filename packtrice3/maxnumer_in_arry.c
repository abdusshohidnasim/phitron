#include<stdio.h>
int main()
{
    int arry[4] = {3,5,6,7}; 
    int sum = arry[0]; 
    for (int i = 0; i < 4; i++)
    {
        if (sum<=arry[i])
        {
            sum = arry[i]; 
        }
        
    }
    printf("%d", sum); 
    
    
    return 0;
}
