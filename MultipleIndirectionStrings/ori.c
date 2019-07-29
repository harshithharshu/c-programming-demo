#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[]){
    char *word[3];
    word[0] = "one";
    word[1] = "two";
    word[2] = "three";
    for (size_t i = 0; i < 3; i++){
        /* code */
        printf("%s \n",word[i]);
    }
    char *p;
    char **pp;
    pp = word;
    pp+=2;
    printf("%s",*pp);
    
    return 0;
}
