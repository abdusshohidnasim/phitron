/*
B. Searching
time limit per test2 seconds
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).

Note: X may be found once or more than once and may not be found.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Third line contains a number X (0 ≤ X ≤ 109).

Output
Print the position of X in the first time you find it. If it doesn't exist print -1.

Examples
InputCopy
3
3 0 1
0
OutputCopy
1
InputCopy
5
1 3 0 4 5
10
OutputCopy
-1
InputCopy
4
2 3 2 1
2
OutputCopy
0


*/

#include <stdio.h>
int main()
{
    int arrylenth;
    scanf("%d", &arrylenth);
    long long int arry[arrylenth];
    int index= -1; 
    for (int i = 0; i < arrylenth; i++)
    {
        scanf("%lld", &arry[i]);
        
    }
    long long int foundingnumber;

    scanf("%lld", &foundingnumber);
    for (int j = 0; j < arrylenth; j++)
    {
        if (arry[j] == foundingnumber)
        {
            index = j; 
            break;
        }
      
        
    }
    printf("%d",index); 
    return 0;
}
