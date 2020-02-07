//TYPES

#include<stdio.h>
#define for 1000 
//define used for declare constant value >>> this value can not change

int a;
//int type >> keep integer

int main()
{
    printf("%d\n",a);

    unsigned int b = 300000000;
    // unsigned keep positive integer >> unsigned int keep positive integer
    printf("%d\n",b);

    float c =10.0;
    //float keep decimal number

    double d = 11.0;
    //double keep decimal number like float but it can keep more accurate than float

    char e = '\0';
    //'\0' is null character or "enter"
    printf("--%c--\n",e);

    char name[9] = "Nichanan";
    //this is an array of string >> name[n] >> "n" is size of string
    printf("%s\n",name);
    printf("Hello World!\n");
}