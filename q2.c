
#include <stdio.h>

void is_Valid(char* email)
{
    int i = 0;
    int check = 0;
    int count = 0;
    int idx1 = -1, idx2 = -1;
    while(email[i]!='\0')
    {
        if((email[i]>='A' && email[i]<='Z') || (email[i]>='a' && email[i]<='z') || (email[i]>='0' && email[i]<='9'))
        check = 1;
        else if((email[i]=='.' || email[i]=='_' || email[i]=='@') && (i!=0 && email[i+1]!='\0'))
        check = 1;
        else
        {
            check = -1;
            break;
        }

        if(email[i]=='@')
        {
            count ++;
            idx1 = i;
        }
        if(count>1)
        {
            check = -1;
            break;
        }

        if(email[i]=='.')
        {
            idx2 = i;
        }
        
        if(idx2 - idx1 <2)
        {
         check = -1;
        }
        
        i++;
        
    }
        if(check == 1)
          printf("\nValid mail address");
        
        
        else
          printf("\nInvalid email address");
        
    
}

int main()
{
    char email[1000];
    printf("Enter the mail:\n");
    scanf("%s",email);
    is_Valid(email);
    return 0;
}