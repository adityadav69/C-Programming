#include<stdio.h>

void display();   //function prototype//

int main(){
    display();
    display();   //function call//
    display();
    display();
    display();
    return 0;
}
void display(){
    printf("Hello World\n");   //function definition//
}