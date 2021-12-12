#include<stdio.h>
int main()
{
    char vowel[10]={'A','E','I','O','U','a','e','i','o','u'};
    char character,flag;
    printf("Enter a character: ",&character);
    scanf("%c",&character);

    for(int i=0;i<10;i++)
    
    {
        if(character==vowel[i])
        {
            flag=1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(flag==1)
    {
        printf("%c is a vowel letter. ",character);
    }
    else
    {
        printf("%c is consonant letter.",character);
    }


}