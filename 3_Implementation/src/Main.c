#include <stdio.h>
int And_gate(int a, int b);
int Or_gate(int a, int b);
int Not_gate(int a);
int Exor_gate(int a, int b);
int Nor_gate(int a, int b);
int Exnor_gate(int a, int b);
int Nand_gate(int a, int b);
int Half_adder(int a,int b);
int Half_subtractor(int a,int b);


int main()
{
    int components, a,b,output;
    printf("Enter binary for a =");
    scanf("%d",&a);
    printf("Enter binary for b= ");
    scanf("%d",&b);
    printf("Please select the required component:\n");
    printf("1-AND\n2-OR\n3-NOT\n4-EXOR\n5-NOR\n6-EXNOR\n7-NAND\n8-Half_adder\n9-Half_subtractor");
    scanf("%d", &components);
    switch (components)
    {
        case 1:
            And_gate(a,b);
            break;
        
        case 2:
            Or_gate(a,b);
            break;

        case 3:
            Not_gate(a);
            break;

        case 4:
            Exor_gate(a,b);
            break;

        case 5:
            Nor_gate(a,b);
            break;
        
        case 6:
            Exnor_gate(a,b);
            break;

        case 7:
            Nand_gate(a,b);
            break;

        case 8:
            Half_adder(a,b);
            break;

        case 9:
            Half_subtractor(a,b);
            break;

        default:
            printf("Please select the correct option\n");
            break;
    }

return 0;
}
