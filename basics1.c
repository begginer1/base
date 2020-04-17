#include<stdio.h>
#include<math.h>
int main()    {   
         int a=041;
         int b=0x54; // octal value
        printf("-%.0f to %.0f\n",pow(2,(sizeof(char)*8)-1),pow(2,(sizeof(char)*8)-1)-1);
        printf("-%.0f to %.0f\n",pow(2,(sizeof(int)*8)-1),pow(2,(sizeof(int)*8)-1)-1);
        printf(".0f to %.0f\n",pow(2,(sizeof(short int)*8)-1),pow(2,(sizeof(short int)*8)-1)-1);
        printf("0 to %.0f\n",pow(2,(sizeof(signed char)*8)-1)-1);
       printf("%d\n",a); // print decimal value
       printf("%o\n",a);// print octal value
       printf("%d\n",b);// print decimal value
       printf("%0x\n",b);//print hexadecimal value
       return 0;
}
