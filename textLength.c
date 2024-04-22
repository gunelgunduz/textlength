#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//metin uzunlugunu tapan program

int main(int argc, char *argv[])
{
    char text[100];
    int piece=0;

    printf("Enter text:");
    gets(text);

    int i;

    for(i=0; text[i]!='\0'; i++){
        piece++;
    }

    int dimension = strlen(text);

    printf("text size with for :%d\n", piece);
    printf("text size with strlen: %d", dimension);
    
    return 0;
}