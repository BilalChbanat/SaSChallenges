#include <stdio.h>

int main(int argc, char const *argv[])
{
    char vowel;
    printf("Entrer un character: ");
    scanf("%c", &vowel);

switch (vowel)
{
case 'e':
    printf("character est voyelle");
    break;
case 'a':
    printf("character est voyelle");
    break;

case 'i':
    printf("character est voyelle");
    break;
case 'o':
    printf("character est voyelle");
    break;
case 'u':
    printf("character est voyelle");
    break;
default:
    printf("character est non voyelle");
}
    return 0;
}
