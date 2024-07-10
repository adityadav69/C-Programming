#include<stdio.h>
// #include<stdlib.h>

int main(){
    printf("DATE is %s\n", __DATE__);
    printf("Time is %s\n",__TIME__);
    printf("ANSII is %d\n",__STDC__);
    return 0;
}