#include<stdio.h>
int Nand_gate(int a, int b)
{
 int output=0;
 if(a==0 && b==0)
  output=1;
  if(a==1 && b==0)
  output=1;
 if(a==0 && b==1)
  output=1;
 if(a==1 && b==1)
  output=0;
 return output;
 printf("Output is= %d", output);
}