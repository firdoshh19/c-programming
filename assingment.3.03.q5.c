#include<stdio.h>
int main (){

    char ch;

   printf("Enter a grade:");
   scanf("%c",&ch);

   if(ch=='E'|| ch=='e'){
    printf("Excellent");
   }

   else if (ch=='V' || ch=='v'){
   printf("Very Good");
   }

   else if(ch=='G' || ch=='g'){
    printf("Good");
   }

    else if (ch=='A' || ch=='a'){
    printf("Average");
    }

   else if(ch=='F'|| ch=='f'){
    printf("fail");
   }
   else{
    printf("Invalid");
   }


   }
