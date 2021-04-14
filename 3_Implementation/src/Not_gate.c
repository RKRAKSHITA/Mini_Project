#include<stdio.h>
int Not_gate(int a)
{
int output=0;
 if(a==0 )
  output=1;
 if(a==1 )
  output=0;
return output;
printf("Output is= %d", output);
}