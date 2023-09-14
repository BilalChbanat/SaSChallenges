#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a,b,c,delta;
    
    printf("Entrer la valeur de A\n: ");
    scanf("%f",&a);
    
    printf("Entrer la valeur de B\n: ");
    scanf("%f",&b);

    printf("Entrer la valeur de C\n: ");
    scanf("%f",&c);

    delta = b*b-4*a*c;

    if (delta == 0)
    {
        printf("x = \n", -b/(2*a));
    }else if (delta > 0){
        printf("x1 = %f \n ", (-b+sqrt(delta))/(2*a));
        printf("x2 = %f \n", (-b-sqrt(delta))/(2*a));
    }else{
        printf("il n'y a pas de solution");
    }
    
    return 0;
}