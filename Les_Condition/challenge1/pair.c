#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter un nombre: ");
    scanf("%d", &n);

    if (n%2 == 0)
    {
        printf("Le nombre est paire");
    }else{
        printf("Le nombre est impaire");
    }
    

    return 0;
}
