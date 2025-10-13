#include <stdlib.h>
#include <stdio.h>

int str_len(char *str){
int i = 0;

while(str[i] != '\0')
{
	
	i = i + 1;
}   
return i;
}
int main()
{
char str[100];
printf("ecrir : ");
scanf("%s", str);
printf("longuer: %d\n", str_len(str));
return 0;
}