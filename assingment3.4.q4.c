#include<stdio.h>
int main (){
    float radius,pi,area;
    float length,width;
    float base,height;
    int choice;

    printf("enter your shape\n");
    printf("1 circle\n");
    printf("2 rectangle\n");
    printf("3 triangle\n");


    printf("enter your choice:");
    scanf("%d",&choice);

    if(choice==1){
        printf("enter the radius:");
        scanf("%f",&radius);

        pi=3.1415;
        area=pi*radius*radius;
        printf("area of circle is %f",area);

    }
    else if(choice==2){
        printf("enter the length and width:");
        scanf("%f%f",&length,&width);

        area=length*width;
        printf("area of rectangle is %f",area);
    }
    else if(choice==3){
        printf("enter the base and height:");
        scanf("%f%f",&base,&height);

        area=0.5*base*height;
        printf("area of rectangle is %f",area);
    }
    else{
        printf("invalid choice");
    }







}
