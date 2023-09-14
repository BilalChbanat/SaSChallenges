#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;

    printf("Entrer un character : ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
    {
       printf("Le caractere est majuscule\n");
    }else if (c >=97 && c <=122){
        printf("Le caractere est minuscule\n");
    }else {
        printf("not a character\n");
    }
    

    return 0;
}
