#include<stdio.h>
#include<string.h>

void usingString()
{
    char str1[100]="Hello ";
    char str2[100]="SIR!!";
    printf("USING STRINGS\n");
    printf("%s",str1);
    printf("%s",str2);
    printf("%d\n",strcmp(str1,str2));
    printf("%s\n",strcat(str1,str2));
    printf("%s\n",strrev(str1));
    int a=strlen(str1);
    int b=strlen(str2);
    if(a==b)
    {
        printf("both strings have equal length\n");
    }
    else
    {
        printf("both strings have different length\n");
    }

}
void charArray()
{
    char chr1[]={'H','e','l','l','o'};
    char chr2[]={'S','I','R','!','!'};
    printf("USING CHARACTER ARRAY\n");
    int chr1_len=sizeof(chr1);
    int chr2_len=sizeof(chr2);
    
    for(int i=0;i<chr1_len;i++)
    {
        printf("%c",chr1[i]);
    }
    printf("\n");
    for(int i=0;i<chr1_len;i++)
    {
        printf("%c",chr2[i]);
    }
    printf("\n");
    for(int i=0;i<chr1_len;i++)
    {
        if(chr1[i]==chr2[i])
        {
            continue;
        }
        else
        {
            if((int)chr1[i]>(int)chr2[i])
            {
                printf("1\n");
                break;
            }
            else
            {
                printf("-1\n");
                break;
            }
        }
    }
    
    char revarray[100];
    for(int i=0;i<chr1_len;i++)
    {
        revarray[i]=chr1[chr1_len-i-1] ; 
    }
    
    for(int i=0;i<chr1_len;i++)
    {
        printf("%c",revarray[i]);
    }
    printf("\n");

    char newarray[100];
    for(int i=0;i<chr1_len;i++)
    {
        newarray[i]=chr1[i];
    }
    
    for(int i=chr1_len;i<chr1_len+chr2_len;i++)
    {
        newarray[i]=chr2[i-chr1_len];
    }
    for(int i=0;i<chr1_len+chr2_len;i++)
    {
        printf("%c",newarray[i]);
    }
    printf("\n");
    if(chr1_len==chr2_len)
    {
        printf("both arrays are of equal length");
    }
    else
    {
    printf("both arrays are not of equal length");
    }
}
int main()
{
    usingString();
    charArray();
}
