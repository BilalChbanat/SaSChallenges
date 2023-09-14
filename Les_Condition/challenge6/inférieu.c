#include <stdio.h>
int main(int argc, char const *argv[])
{
    float x;
    printf("Entrer un nombre :\n");
    scanf("%f", &x);

    if (x>0)
    {
        printf("Le nombre est positif");
    }else if (x<0)
    {
        printf("Le nombre est negatif");
    }else{
        printf("Le nombre est nul");
    }
    
    
    return 0;
}
