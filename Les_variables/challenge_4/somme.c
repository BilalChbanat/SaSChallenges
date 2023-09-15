#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    float somme;

    printf("Entrer la valeur de nombre A:");
    scanf("%d",&a);

    printf("Entrer la valeur de nombre B:");
    scanf("%d",&b); 

    printf("Entrer la valeur de nombre B:");
    scanf("%d",&c);  

    somme=a+b+c;
    printf("La somme des trois nombres est %f \n",somme);

    printf("La moyenne des trois nombres est %f",somme/3);
       

    return 0;
}
