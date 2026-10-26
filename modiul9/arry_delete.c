#include<stdio.h>
int main()
{
    int input; 
    scanf("%d",&input); 
    int arry[input]; 
    for (int i = 0; i < input; i++)
    {
        scanf("%d",&arry[i]); 
    }
    int deleteindex; 
    scanf("%d",&deleteindex); 
    for (int i = deleteindex; i < input; i++)
    {
        arry[i]= arry[i+1]; 
    }
    input--; 
    for (int i = 0; i < input; i++)
    {
        printf("%d ",arry[i]); 
    }
    
    
    
    return 0;
}
