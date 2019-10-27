#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strcatt(char *str1, char *str2){
    char *result;
    int i=0,j=0,s;
    s=strlen(str1)+strlen(str2)+1;
    result=(char *)malloc(s*sizeof(char));
    for(i;str1[i]!='\0';i++)
        result[i]=str1[i];
    for(j;str2[j]!='\0';j++)
        result[i+j]=str2[j];
    result[i+j]='\0';
    return result;
}

int main()
{
    char string1[] = "napis1";
    char string2[] = "napis2";
    char *result;
    printf("%s\n", &string1);
    printf("%s\n", &string2);
    result=strcatt(string1,string2);
    printf("%s\n", &result);
    return 0;
}
