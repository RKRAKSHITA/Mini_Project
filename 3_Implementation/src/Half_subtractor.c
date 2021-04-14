#include<stdio.h>
int Exor_gate(int a, int b);
int Half_subtractor(int a,int b)
{
    int output=0;
    output=Exor_gate(a,b);
    return output;
    printf("Output is= %d", output);
}
