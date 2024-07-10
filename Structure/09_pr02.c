#include<stdio.h>
struct vector{
    int x;
    int y;
};
struct sumvector(struct vector v1,struct vector v2){
    result.x= v1.x+v2.x;
     result.y=v1.y+v2.y;
     return result;

}


int main(){
    struct vector v1,v2,sum;
    v1.x=5;
    v1.y=7;
    printf("The first dimension is %d\n and second is %d", v1.x,v1.y);


     v2.x=6;
    v2.y=7;
    printf("The first dimension is %d\n and second is %d", v2.x,v2.y);

    
    sum=sumvector(vector v1,vector v2);
    printf("Sum is %d", sum.x);
    printf("Sum is %d", sum.y);

    
    return 0;
}