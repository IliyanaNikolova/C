#include <stdio.h>
int main(){
    char name[30];
    printf("Enter a name: ");
    fgets(name,sizeof(name), stdin); //read string raw
    printf("Name: ");
    puts(name);  //display string
    return 0;
}