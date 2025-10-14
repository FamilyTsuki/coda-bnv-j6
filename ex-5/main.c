#include <stdlib.h>
#include <stdio.h>

int count_words(char *str) {
    int i = 0;
    int n = 1;
    int mot = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != "'") {
            if (mot == 0) {
                n++;
                mot = 1;
            }
        } else {
            mot = 0;
        }
        i++; 
    }
    return n;
}

int main() {
    int nb_words;

    nb_words = count_words("Hello World!");
    printf("La phrase contient %d mots\n", nb_words);

    nb_words = count_words("La vie l'univers et     tout le reste");
    printf("La phrase      contient %d mots\n", nb_words);
}