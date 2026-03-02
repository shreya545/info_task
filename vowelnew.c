#include <stdio.h>
#include<string.h>

int main() {
   char word[50];
   printf("enter the string: ");
   scanf("%[^\n]",word);
   int n=strlen(word);
   printf("before str length :%d \n", n);
   int k=0;
   for(int i=0; word[i]!='\0'; i++){
       if(word[i]=='a'|| word[i]=='e'|| word[i]=='i'|| word[i]=='o'|| word[i]=='u')
       {
           for(int j=i; word[j]; j++){
               word[j]=word[j+1];
           }
           n--;
           i--;
       }
   }
   printf("String after removing vowels: %s\n", word);
   printf("after str length :%d \n",n);

    return 0;
}

