#include <stdio.h>
#include <string.h>

struct record
{
    int loop;
    char word[5];
    float sum;
};
struct record sample;

void main(){
    sample.loop = 10; 
    strcpy(sample.word, "Zuhdi");
    printf("%s", sample.word);
}

