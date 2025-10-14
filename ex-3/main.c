
#include <stdlib.h>
#include <stdio.h>
void str_rev(char *str){
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    char* str_re = str;
    int i = len;
    while (i != 0){
        str_re[len - i] = str[i - 1];
        i = i - 1;

    }
 printf("%s\n", str_re);   
}

int main(){
    str_rev("hello");

}