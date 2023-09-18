#include <stdio.h>

int main(int argc, char const *argv[])
{
    float moyenne,tableau[1000];
    int size,i;

    printf("Enter rows number: ");
    scanf("%d", &size);

    for ( i = 0; i < size; i++)
    {
        printf("Enter la note de index %d: ", i+1);
        scanf("%f", &tableau[i]);   
    }

    printf("les elements de tableau sont : \n");
    for ( i = 0; i < size; i++)
    {
        printf("%f \n", tableau[i]);
    }



    moyenne = 0;

    for ( i = 0; i < size; i++)
    {
        moyenne = moyenne + tableau[i];
    }
    moyenne = moyenne / size;
    printf("le moyenne de tout les element de tableau est : %f", moyenne);


    for (i = 0; i < size; i++){
        if(tableau[i] == moyenne){
            printf("\n %f egal", i);
        }
        if (tableau[i] < moyenne)
        {
            printf("\n %f inferieur a la moyenne \n", tableau[i]);
        }
        if (tableau[i] > moyenne)
        {
            printf("\n %f superieur a la moyenne \n", tableau[i]);
        }
        
    }
    
    for ( i = 0; i < size; i++)
    {
        if (tableau[0] < tableau[i])
        {
            tableau[0] = tableau[i];
        }
        
    }
    printf("\n le grand note dans le tableau est : %f index %d", tableau[0] ,i);

    for ( i = 0; i < size; i++)
    {
        if (tableau[0] > tableau[i])
        {
            tableau[0] = tableau[i];
        }
        
    }
    printf("\n le grand note dans le tableau est : %f index %d", tableau[0] ,i);
    
    
    return 0;
}
