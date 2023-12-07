#include<stdio.h>
#include<stdlib.h>
main(){
    FILE*fp;
  fp =  fopen(" test.txt","a");
  if(fp == NULL)
  printf("file does not exist");
  else
  printf("file exist");
  fprintf("abchdfhf",fp);
  fprintf(fp,"%s " tanisha");
  fputs("purnima",fp);

  fopen("test.txt","a");
  fprint("hello",fp);
  fclose(fp);
 
  fopen("test.txt","a+");
  fprint("hello",fp);
  fclose(fp);
 
 fopen("test.txt","w");
  fprint("hello",fp);
  fclose(fp);

fopen("test.txt","w+");
  fprint("hello",fp);
  fclose(fp);

}