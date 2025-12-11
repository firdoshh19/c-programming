#include<stdio.h>
int main (){

      char ch;
      printf("Enter single alphabet character:");
      scanf("%c",&ch);
      ch=tolower(ch);

      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("The character is Vowel");
      }
      else{
        printf("The character is Constant");
      }




             }
