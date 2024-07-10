// #include<stdio.h>

// int main(){
//     int sum=0;
//     for(int i=1;i<=10;i++){
//         sum+=i;
//     }
//     printf("the sum of first 10 natural number is %d", sum);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int sum = 0;
    int i = 1;
    do{
        sum=sum+i;
        i++;
    }
    while (i <= 10);
    printf("sum is %d", sum);
    return 0;
}