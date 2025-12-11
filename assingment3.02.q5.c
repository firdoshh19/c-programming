#include<stdio.h>
 int main(){
 int angle1,angle2,angle3,sum;

  printf("Enter the value of angle1:");
  scanf("%d",&angle1);

  printf("Enter the value of angle2:");
  scanf("%d",&angle2);

  printf("Enter the value of angle3:");
  scanf("%d",&angle3);

  sum=angle1+angle2+angle3;
  printf("sum=%d",sum);

  if(sum==180){
    printf("\n valid triangle:");
  }
 else{
    printf("\n Invalid triangle:");
 }




 }

