#include<stdio.h>
int palindrome(int n)
{
    int dig,rev=0;
    while(n!=0)
    {
        dig=n%10;
        n=n/10;
        rev=rev*10+dig;
    }
    return rev;
    
}
int main()
{
    int x,res;
    printf("Enter the number\n");
    scanf("%d",&x);
    res=palindrome(x);
    if(res==x)
    {
        printf("%d is palindrome",x);
    
    }
    else
    {
        printf("%d is not palindrome",x);
    }
    return 0;
}