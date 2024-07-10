#include<stdio.h>
void change(int *);

int main(){
    int i=5;
    change(&i);
    printf("the address of i is %u\n", *(&i));
    return 0;
}
void change(int *ptr){
    *ptr=*ptr*10;

}