#include <stdio.h>

int main(int argc, char const *argv[])
{
    int swap, size, tableaux[1000];
    printf("Enter rows number: ");
    scanf("%d", &size);
    for ( int i = 0; i < size ; i++){
        printf("Entrer element de index %d \n", i);
        scanf("%d", &tableaux[i]);

    }
    // for ( int i = 0; i < size ; i++){
    //     printf("\n %d", tableaux[i]);

    // }
    for(int i =0 ; i < size ; i++){
        for(int j =i+1; j<size ; j++){
            if (tableaux[j] < tableaux[i])
            {
                swap = tableaux[i];
                tableaux[i] = tableaux[j];
                tableaux[j] = swap;
            }
        }
    }
    printf("sorted list is : \n");
    for ( int i = 0; i < size ; i++){
        printf("\n %d", tableaux[i]); 
    }
    return 0;
}
