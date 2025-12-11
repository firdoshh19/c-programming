#include<stdio.h>
int main(){
    float number1,number2,addition,subtraction,multiplication,division;
    int choice;

    printf("enter your choice\n");
    printf("1 addition\n");
    printf("2 subtraction\n");
    printf("3 multiplication\n");
    printf("4 division\n");


    printf("enter your choice:");
    scanf("%d",&choice);

    if(choice==1){
        printf("enter number1 and number2:");
        scanf("%f%f",&number1,&number2);
        addition=number1+number2;
        printf("sum is %f",addition);
    }
    else if(choice==2){
        printf("enter number1 and number2:");
        scanf("%f%f",&number1,&number2);
        subtraction=number1-number2;
        printf("difference is %f",subtraction);
    }
    else if(choice==3){
        printf("enter number1 and number2:");
        scanf("%f%f",&number1,&number2);
        multiplication=number1*number2;
        printf("product is %f",multiplication);
    }
    else if(choice==4){
        printf("enter number1 and number2:");
        scanf("%f%f",&number1,&number2);
        division=number1/number2;
        printf("division is %f",division);
    }
    else {
        printf("invalid number");
    }







}
