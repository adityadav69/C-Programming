#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess;
    int nguess=1;
    srand(time(0));
    number=rand()%100+1;
    do{
        printf("Guess the number in between 1 to 100\n");
        scanf("%d", &guess);
        if(guess>number){
            printf("Lower number please\n");
        }
        else if(guess<number){
            printf("Greater number please\n");
        }
        else{
            printf("yay! you guess correctly\n you take %d attempts", nguess);
        }
        nguess++;
    }
    while(guess!=number);
    
    return 0;
}