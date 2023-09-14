#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a,m,j,h,s,c1,c2,c3,c4;
    int e;


    printf("Donnere la annee :");
    scanf("%f", &a);

    c1 = a * 365; //jour
    c2 = c1 * 24; //hours
    c3 = c2 * 60; //minutes
    c4 = c3 * 60; //seconds

    printf("===================MENU =================\n");
    printf("Tapez 1 pour converter jour:\n");
    printf("tapez 2 pour converter huere:\n");
    printf("Tapez 3 pour converter minutes:\n");
    printf("Tapez 4 pour converter seconds:\n");
    printf("=========================================\n");
    scanf("%d", &e);

    switch(e){
        case 1:
            printf("%f",c1);
            break;
        case 2:
            printf("%f",c2);
            break;
        case 3:
            printf("%f",c3);
            break;
        case 4:
            printf("%f",c4);
            break;
        default:
            0;
    }

    return 0;
}
