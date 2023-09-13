#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b;

    printf("Entrer la valeur de nombre A:");
    scanf("%d",&a);

    printf("Entrer la valeur de nombre B:");
    scanf("%d",&b);

    printf("A + B: %f\n", (float)a+b);    
    printf("A - B: %f\n", (float)a-b);
    printf("A * B: %f\n", (float)a*b);
    printf("A / B: %f\n", (float)a/b);
    printf("A modulo B: %f\n", (a/b));
    
    

    return 0;
}
