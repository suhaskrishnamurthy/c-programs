#include<stdio.h>
void main()
{
    char a[100];
    int i;
    printf("Enter the string\n");
    scanf("%s",a);
    i=0;
    printf("Vowels in the given string %s are ",a);
    while(*(a+i))
    {
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
        {
        printf("%c ",*(a+i));
        }
        i++;
    }
     i=0;
    printf("\nConsonants in the given string %s are ",a);
    while(*(a+i))
    {
        if(a[i]!='a'&&a[i]!='A'&&a[i]!='e'&&a[i]!='E'&&a[i]!='i'&&a[i]!='I'&&a[i]!='o'&&a[i]!='O'&&a[i]!='u'&&a[i]!='U')
        {
        printf("%c ",*(a+i));
        }
        i++;
    }
}
