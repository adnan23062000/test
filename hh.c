#include<stdio.h>
#include<string.h>
char reverse(char s);

int main()
{
    int i,j;
    char s[100],r[100];
    printf("enter a string:");
    scanf("%s",&s);
    int len=strlen(s);
     printf("Reverse String:%s",reverse(s));

}

//ndfjgnjfdg

char reverse(char s)
{
    int i,j;
    char r[100];
    //int len=strlen(s);

     for(i=len-1,j=0;i>=0,j<len;i--,j++){
        r[j]=s[i];
    }
    return r;
}
