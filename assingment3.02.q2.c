#include<stdio.h>
int main(){
    int roll_number,a,b,c,total_marks;
    char name[20];
    float percentage;

    printf("Enter the student roll_number:");
    scanf("%d",&roll_number);

    printf("Enter student Name:");
    scanf("%d",&name);

    printf("Enter marks of subject a:");
    scanf("%d",&a);

    printf("Enter marks of subject b:");
    scanf("%d",&b);

    printf("Enter marks of subject c:");
    scanf("%d",&c);

    total_marks=a+b+c;
    printf("total marks of three subjects=%d",&total_marks);

    if(percentage>=60){
        printf("\n First Division");
    }
    else if(percentage>=50){
        printf("\n Second Division");
    }
    else if(percentage>=40){
        printf("\n Third Divison");
    }
    else{
        printf("\n fail");
    }






}
