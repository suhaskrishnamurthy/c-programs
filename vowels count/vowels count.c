#include<stdio.h>
void main()
{
    char a[100];
    int b,i,vow=0;
    printf("Enter the string\n");
    gets(a);
    b=strlen(a);
    for(i=0;i<b;i++)
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        vow++;
    }
    printf("The vowel count is %d",vow);
}