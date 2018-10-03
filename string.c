#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char* name="Luke Skywalker";
  //  name[1] = 'u';
    printf("==name %s\n", name);

    int n =62;
    char* str = malloc(n * sizeof(char));
   // strcpy(str,name);
//way1
    strncpy(str,name,n);
    str[1] = 'u';
    printf("== str: %s\n", str);

//way2
    char* str2 = malloc(n * sizeof(char));
    snprintf(str2, n, "%s(%d)", str, 933111111);
    printf("== str2:%s\n", str2);

    printf("== strlen(str2) %d\n", strlen(str2));
}