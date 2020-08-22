#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
void printarray(char **);
int main(){
      char *str[10]={"ss","WEerwerfwerfe","ere"};
      printarray(str);

    return 0;
   }

   void printarray(char **str_arr){
       for (int i = 0; str_arr[i]!=NULL;i++)
       {
         printf("%s\n",str_arr[i]);
       }
       

   }