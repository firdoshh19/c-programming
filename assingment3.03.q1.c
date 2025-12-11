#include<stdio.h>
int main () {

         char ch;

         printf("Enter Special character:");
         scanf("%c",&ch);


        if(ch>='A' && ch<='Z' || ch>='a'&& ch<='z'){
            printf("The character is an Alphabet.");
        }
        else if(ch>='0' && ch<='9'){
            printf("The character is a digit.");
        }
         else{
            printf("The character is a special character.");
         }





         }

