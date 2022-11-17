#include <stdio.h>

int main(){

    char string[] = "PROGRAMMING";
    int i,j, length;
    for(i = 0; string[i] != '\0';i++){

    }
    length = i;
    for(i = 0; i < length; i++){
        for(j = 0; j < length - i; j++){
            printf("%c", string[j]);
        }
        printf("\n");
    }
    return 0;
}