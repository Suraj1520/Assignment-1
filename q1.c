
#include<stdio.h>

int main()
{
    char num[1000];
    printf("Enter the number: ");
    scanf("%s",num);
    int i=0;
    int check1=0,check2=0;
    while(num[i]!='\0')
    {
        if(num[i]=='.')
        {
            check1++;
            if(num[i+1]!='\0')
            check2=1;
        }
        i++;
    }
    if(check1==1 && check2==1)
    printf("Valid\n");
    else
    printf("Invalid\n");
return 0;
}