#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    float dolar;
    do
    {
        dolar = get_float("give me a number \n");
    }
    while(dolar<=0);
    int kurus = round(dolar * 100);
    int ceyrek=0,on=0,bes=0,bir=0;
    while(kurus>=25)
    {
        ceyrek++;
        kurus-=25;
    }
    while(kurus>=10)
    {
        on++;
        kurus-=10;
    }
    while(kurus>=5)
    {
        bes++;
        kurus-=5;
    }
    while(kurus>=1)
    {
        bir++;
        kurus-=1;
    }
    int sonuc = bir + bes + on + ceyrek;
    printf("%i\n",sonuc);
}
