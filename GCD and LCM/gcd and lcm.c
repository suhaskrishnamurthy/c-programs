#include<stdio.h>
int main()
{
    int a,b,x,y,t,gcd,lcm;
    printf("Enter the numbers to find LCM and HCF\n");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(b!=0)
    {
        t=a;
        b=a%b;
        a=t;
        }
        gcd=a;
        lcm=x*y/gcd;
        printf("Greatest common divisor of %d %d is %d\n",x,y,gcd);
        printf("Least common multiplier of %d and %d is %d",x,y,lcm);
        return 0;
        
}