#include <cs50.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    long creditnumber,copy,copy2;
    do
    {
    creditnumber = get_long("give me a number:\n");
    }
    while(creditnumber<=0);
    int counter=0,carp,carp2=0,asildeger=0,deger2,deger,diger,cift,ciftv;
    copy = creditnumber;
    copy2 = creditnumber;
    while(copy>0)
    {
        if(copy>=10&&copy<=99)
        {
            cift = copy;
            ciftv = copy/10;
        }
        counter++;
        copy/=10;
    }
    while(copy2>0)
    {
        deger = copy2%100;
        diger = copy2%10;
        deger = deger/10;
        deger2 = deger*2;
        deger2 = (deger2/10) + (deger2%10);
        asildeger +=deger2 + diger;
        copy2/=100;
    }
    if(asildeger%10==0)
    {
        if((cift==37||cift==34)&&(counter==15))
        {
            printf("AMEX\n");
        }
        if(ciftv==4&&(counter==13||counter==16))
        {
            printf("VISA\n");
        }
        if((cift==51||cift==52||cift==53||cift==54||cift==55)&&(counter==16))
        {
            printf("MASTERCARD\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
