#include <cs50.h>
#include <stdio.h>
int main(void){
    int height, sayac = 0;
    do
    {
        height = get_int("how height do you want it to be?\n");
    }
    while(height > 8 || height<1);
    for(int a=0;a<height;a++)
    {
        int count=0;
        sayac++;
        for(int b=0; b<height-sayac; b++)
        {
            count++;
            printf(" ");
        }
        int isaret = height-count;
        for(int c=0; c<isaret;c++)
        {
            printf("#");
        }
        printf(" ");
        for(int d=0; d<isaret;d++)
        {
            printf("#");
        }
        printf("\n");
    }
}
