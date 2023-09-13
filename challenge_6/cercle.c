#include <stdio.h>

int main(int argc, char const *argv[])
{
    float pi = 3.14;
    float rayon;

    printf("Donner le rayon :");
    scanf("%f", &rayon);

    printf("La circonférence d'un cercle est: %f\n", 2*pi*rayon);

    return 0;
}
