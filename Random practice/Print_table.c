#include<stdio.h>
void print_table(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n", n*i);
    }
}
int sum(int a,int b){
    int result=a+b;
    printf("result=%d",result);
}

int main(){
    int n,x,y;
    printf("Enter the value of x and y");
    scanf("%d%d",&x,&y);
    printf("Enter the number to print table\n");
    scanf("%d", &n);
    print_table(n);
    sum(x,y);

    
    return 0;
}