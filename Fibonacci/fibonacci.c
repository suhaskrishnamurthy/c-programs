#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The fibonacci series are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}