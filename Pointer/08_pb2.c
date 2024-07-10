#include<stdio.h>
void address(int *);

int main(){
    int i;
    address(&i);
    printf("the address of i is %u\n", &i);
    return 0;
}
void address(int *ptr){
    printf("The address of i is %u\n", ptr);

}