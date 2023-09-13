#include <stdio.h>

int main(int argc, char const *argv[])
{
    float c,f;

    printf("Donner la temperatura (Fahrenheit):  \n");
    scanf("%f", &f);
    c = (f-32)/1.8;
    
    if (c<=5)
    {
        printf("la température très froi",c);
    }
    else if (c>=6 && c<=26)
    {
         printf("la température froi",c);
    }
    else if (c>=27 && c<=35)
    {
         printf("la température chaud",c);
    }
    else if (c>=36 && c<=55)
    {
         printf("la température très chaud",c);
    }else{
        printf("unblievable");
    }
    
    
    return 0;
}
