#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
void modify(char **);
int main(){
      char *s;
      printf("1 contain s before malloc %p \n",s);
      s=malloc(5);
      printf("2 contain s before malloc %p \n",s);
      modify(&s);

    return 0;
   }
   void modify(char **str){
       //printf("before malloc address %p\n",*str);
      // free(*str);
       //*str=malloc(10);
      //  printf("after malloc address %p",*s);
   }