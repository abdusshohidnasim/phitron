#include<stdio.h>
#include<string.h>
int main()
{
    char s[50]; 
    fgets(s,10,stdin); 
    printf("%s",s); 
    printf("%d",strlen(s));
    return 0;
}
