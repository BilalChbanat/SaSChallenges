#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c ;

    printf("Entrer un character: ");
    scanf("%c", &c);

    if (c>= 65 && c<= 90)
    {
        printf("%c est une majuscule", c);
    }else {
        printf("%c est une miniscule", c);
    }
    

    return 0;
}
