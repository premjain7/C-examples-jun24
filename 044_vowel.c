//program to read a character and display if it is a vowel or consonant
#include<stdio.h>
int main()

{

    char ch;

    printf("Enter A Character...:");
    scanf("%c",&ch);
   if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
   {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("Inputted Character Is A Vowel");
    else
        printf("Inputted Character Is A Consonant");

   }
    else
        printf("\aInvalid Input");
return 0;
}
