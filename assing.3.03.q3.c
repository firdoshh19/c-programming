#include<stdio.h>
int main (){
    float cp,sp,difference,profit,loss;

    printf("enter the sp and cp:");
    scanf("%f%f",&sp,&cp);

    difference=sp-cp;

    if(sp>cp){
        printf("profit=%f",difference);

    }
    else if(cp>sp){
        printf("loss=%f",difference);
    }
    else{
        printf("no profit, no loss");
    }








}
