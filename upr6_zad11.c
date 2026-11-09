#include <stdio.h>
int main(void){
    char name[]="Iliana Nikolova";
    printf("%c", *name);
    printf("%c", *(name+1));
    printf("%c", *(name+7));

    //2ri variant
    char*nameIl;
    nameIl=name;
    printf("%c", *nameIl);
    printf("%c", *(nameIl+1));
    printf("%c", *(nameIl+7));
    return 0;
}