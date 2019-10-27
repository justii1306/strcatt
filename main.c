#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[] = "napis1";
    char string2[] = "napis2";
    char *result;
    printf("%s", &string1);
    printf("%s", &string2);
    result=strcatt(string1,string2);
    printf("%s", &result);
    return 0;
}
char *strcatt(char *str1, char *str2){
    char *result;
    int i=0,j=0,s;
    s=strlen(str1)+strlen(str2)+1;
    result=(char *)malloc(s*siezeof(char));
    for(i;str1[i]!='\n',i++)
        result[i]=str1[i];
    for(j;str2!='\n';j++)
        result[i+j]=str2[j];
    return result;
}
