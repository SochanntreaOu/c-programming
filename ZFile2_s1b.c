#include <stdio.h>
#include <stdlib.h>  /* For exit() function */
int main()
{
   char sentence[1000];
   FILE *fptr;

   fptr = fopen("Zfile2.txt", "w");
   printf("Enter a sentence:");
   gets(sentence);
   //fprintf(fptr,"%s",sentence);
   fputs(sentence,fptr);
   fclose(fptr);
   
   fptr = fopen("Zfile2.txt","r");
   //fscanf(fptr,"%s",sentence);
   fgets(sentence,1000,fptr);
   printf("Sentece:%s",sentence);
   fclose(fptr);
   
   return 0;
}
