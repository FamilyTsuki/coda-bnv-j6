
#include <stdlib.h>
#include <stdio.h>
void str_rev(char *str){
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    char str_re[1000000];
    int i = 0;
    while (i < len){
        str_re[i] = str[len - i - 1];
        i = i + 1;
        
    }
 printf("%s\n", str_re);   
}

int main(){
    str_rev("hello");

}

