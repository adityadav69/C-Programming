#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    printf("enter the first number");
    scanf("%d", &n1);
    printf("enter the second number");
    scanf("%d", &n2);
    printf("enter the third number");
    scanf("%d", &n3);
    printf("enter the fourth number");
    scanf("%d", &n4);
    if(n1>n2&&n1>n3&&n1>n4){
        printf("n1 is greater");
    }
    else if(n2>n1&&n2>n3&&n2>n4){
        printf("n2 is greater");
    }
     else if(n3>n1&&n3>n2&&n3>n4){
        printf("n3 is greater");
    }
     else if(n4>n1&&n4>n3&&n4>n2){
        printf("n4 is greater");
    }
    else{
        printf("Thank You");
    }
    

    

    return 0;
}