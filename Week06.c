//POINTER & SCANF

#include <stdio.h>
#include <stdlib.h>
int main()
{
    // //0... base8
    // //0x.. base16
    int x = 100;
    int a = 0144;
    int b = 0x64;
    printf("x = %d\n",x);
    // printf("reference x = %lu\n",&x); //&x show address
    printf("reference x = %p\n",&x); //%p and %0x show base16  //%p show address in base16

///////////////////////////////////////////////////////////////////////////////////////////

    //POINTER
    int number[] = {4,5,6,7,8}; //show array n size 
    printf("reference number = %p\n",number); 
    printf("reference &number[0] = %p\n",&number[0]);
    printf("index 2 = %d\n", number[2]);
    printf("reference &number[2] = %p\n",&number[2]);//address += size of type
    printf("reference &number[2] = %p\n",&number + 2);

    int *ptr = &x; 
    //when we declare pointer, pointer have * 
    // pointer = address >> * = &
    //'&' means address
    int *arrPtr;
    arrPtr = number;
    printf("ptr = %p , value = %d\n",ptr, *ptr);
    number[2] = 500;
    *(arrPtr+2) = 500;
    //out of range in index >> it will show random number
    printf("arrPtr + 2 = %p , value = %d\n",arrPtr + 2, *(arrPtr+2));

    // int number[] = {4,5,6,7,8};
    for (int *ptr = number; ptr <= &number[4]; ptr++)
    {
        printf("[%p] = %d\n",ptr,*ptr);
    }

    char input[100];
    int count = 0;
    char c;
    while ((c = getchar()) != '\n')//it will break when you click enter
    {
        input[count] = c;
        ++count;
    }
    printf("char arr = %s\n",input);
    for (char *cPtr = input; *cPtr != 0; cPtr++)
    {
        printf("%c\n",*cPtr);
    }

///////////////////////////////////////////////////////////////////////////////////

    //Using scanf for receive value
    int aa;
    char cc;
    char s[100];
    //every type has '&' except %s
    scanf("%d-%c-%s",&aa,&cc,s);
    printf("%d %c %s",aa,cc,s);
    
    
    
    
}