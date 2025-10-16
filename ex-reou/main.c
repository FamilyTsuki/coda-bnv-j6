char *str_cpy(char * str)
{
    int * len = malloc(6 * sizeof(int));
    len[5] = -1;
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    char * str2 = malloc(len * sizeof(str));
    str2[len-1] = '\0';
    free(str)
    free()
}

