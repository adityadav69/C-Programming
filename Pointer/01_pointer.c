#include<stdio.h>

int main(){
    int i=43;
    int j=54;
    printf("The address of i and j is %u %u\n", &i,&j);
      printf("The value of i and j is %d %d", *(&i),*(&j));
    return 0;
}