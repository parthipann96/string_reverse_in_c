#include<stdio.h>
int main()
{
    int i,l=0,mid;
    char str[1000000];
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
    mid=l/2;
    for(i=0;i<mid;i++)
    {
        char temp=str[i];
        str[i]=str[l-1];
        str[l-1]=temp;
        l--;
    }
    printf("%s",str);
    return 0;
}