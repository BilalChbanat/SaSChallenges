#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,somme;

    printf("Donner premiere nombre: \n");
    scanf("%d",&a);

    printf("Donner deuxième nombre:\n");
    scanf("%d",&b);

    somme=a+b;
    if (a == b)
    {
        printf("les nombre est egale :",somme*3);
    }
    
    return 0;
}
