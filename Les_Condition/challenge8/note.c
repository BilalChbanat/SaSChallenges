#include <stdio.h>

int main(int argc, char const *argv[])
{
    float note;

    printf("Entrer votre Moyenne:");
    scanf("%f", &note);

    if (note < 10)
    {
        printf(" recalé \n");
    }else if (note > 10 && note <12){
        printf(" mention passable \n");
    }else if (note >= 12 && note <14){
        printf("mention assez bien \n");
    }else if (note >= 14 && note <16){
        printf("mention très bien \n");
    }else if (note >= 16 && note <20){
        printf("mention très bien \n");
    }else {
        printf("invalide note");
    }

    return 0;
}
