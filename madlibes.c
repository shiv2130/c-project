#include <stdio.h>
#include <stdlib.h>

int main(){
    char color[20];
    char pluralNoun[20];
    char celebritieF[20];
     char celebritieL[20];
    printf("Enter a color");
    scanf("%s", color);
    printf("Enter a plural noun");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity");
    scanf("%s %s", celebritieF, celebritieL);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebritieF, celebritieL);
    return 0;
}