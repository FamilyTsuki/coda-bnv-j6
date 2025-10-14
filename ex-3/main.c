#include <stdlib.h>
#include <stdio.h>

void str_rev(char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    char str_re[1000000];
    for (int i = 0; i < len; i++) {
        str_re[i] = str[len - 1 - i];
    }
    str_re[len] = '\0';
    printf("%s\n", str_re);
}

int main() {
    str_rev("hello");
}