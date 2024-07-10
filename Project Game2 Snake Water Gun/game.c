#include<stdio.h>
#include<time.h>
#include<stdlib.h>

    int snakeWaterGun(char you, char comp){
        if(you==comp){
            return 0;
        }
        else if((you=='s'&& comp=='w')||(you=='w'&& comp=='g')||(you=='g'&& comp=='s')){
            return 1;

        }
        else{
            return -1;
        }
    }
    int main(){
        char you,comp;
        srand(time(0));
        int number=rand()%100+1;
        if(number<33){
            comp='s';
        }
            else if(number<66){
                comp='w';
            }
            else{
                comp='g';
            }

        printf("enter 's' for snake, 'w' for water, 'g' for gun\n");
        scanf("%c", &you);
        int result=snakeWaterGun(you,comp);
        if(result==0){
            printf("Game Drawn\n");
        }
        else if(result==1){
            printf("You Win\n");
        }
        else{
            printf("You loose\n");
        }
        printf("You choose %c and computer choose %c", you,comp);
    return 0;
}