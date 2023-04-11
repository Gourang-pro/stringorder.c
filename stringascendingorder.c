#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    char temp;
        int i,j, len;
        printf("c program to sort character in string\n");
        printf("enter the string\n");
        scanf("%[^\n]",str);
        len = strlen(str);
        for (i  = 0; i < len-1; i++)
        {
                for ( j = i+1; j < len; j++)
            {
                 if (str[i]>str[j])
                {
                    temp = str[i];
                    str[i]=str[j];
                    str[j]=temp;
                }
        
            }
        
        }
        printf("after sorting the character in ascending order : %s",str);

return 0;
}