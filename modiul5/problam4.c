/*
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
InputCopy
a
OutputCopy
A
InputCopy
A
OutputCopy
a
*/


#include<stdio.h>
int main()
{
    char  alpha ; 
    
    scanf("%c",&alpha);
  
    // printf("%c",alpha); 
    if (alpha >=65 && 90>=alpha)
    {
        int smoll = alpha+32; 

        printf("%c",smoll);     
    }else if (alpha >=97 && 122>=alpha)
    {
        
        int big = alpha -32; 
        printf("%c",big); 
    }
    
    // char a = 'z'; 
    // int b = 91; 
    // printf("%c\n",b); 
    // printf("%d",a); 

    
    
    
    return 0;
}
