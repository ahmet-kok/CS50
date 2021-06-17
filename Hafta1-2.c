#include <cs50.h>
#include <stdio.h>
int main(void){
    int height;
    do
    {
        height = get_int("how height do you want it to be?\n");
    }
    while(height > 8 || height<1);
    for(int i=0; i<height; i++)
    {
        for(int b=0; b<=i;b++)
        {
            printf("#");
        }
        printf("\n");
    }
}
