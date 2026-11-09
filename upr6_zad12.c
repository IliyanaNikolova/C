//Напишете програма, която намира броя на думите в низ. Низът е на един ред и думите са разделени с интервал. 
#include <stdio.h>

int main()
{
    char str[] = "Hello, woman!";
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf("The length of the string is: %d\n", length);
    return 0;
}