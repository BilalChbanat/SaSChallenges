#include <stdio.h>

int main(int argc, char const *argv[])
{

    int a,a1,a2,a3,a4,a5;

    printf("Entrer Un nombre:");
    scanf("%d", &a);

    a1=a%10;
    a2=a/100;
    a3=a/10;
    a4=a3%10;
    a5=a4%10;

    int result = a1*100 + a2 + a5*10;

    printf("inverse: %d", result);

    


    
 
    return 0;
}
