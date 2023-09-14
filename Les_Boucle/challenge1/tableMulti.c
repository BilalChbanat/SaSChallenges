#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Entrer un nombre\n : ");
    scanf("%d", &n);

    for (int i = 1; i < 8; i++)
    {
        printf("%d\n", i*n);
    }
    
    return 0;
}
