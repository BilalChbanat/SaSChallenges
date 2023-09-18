#include <stdio.h>

int main(int argc, char const *argv[])
{
    int size,small,big;
    int t[1000];
    printf("Enter rows number: \n");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Entrer element de index: %d\n", i);
        scanf("%d", &t[i]);
        

        if(t[0] < t[i]){
            big = t[i];
        }
        if(t[0] > t[i]){
            small = t[i];
        }
        
    }
    printf("le plus grand nombre dans la liste: %d\n", big);
    printf("le plus petite nombre dans la liste: %d\n", small);


    
    return 0;
}
