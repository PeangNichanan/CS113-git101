//PONITER WITH FUNCTION >> PASS BY REFERENCE

#include <stdio.h>

//void addTen(int number[],int n)
void addTen(int *number,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("AddTen [%p] = %d\n",number + i, *(number + i));
        ///number + i >> number is address ; i is integer >>integer keep 4 byte
        //so number + i >> address + i(4) >> base 16
        //*(number + i) >> point value on i index in number
        *(number + i)+= 10;
    }

}

int addTwenty(int *n)
{
    *n +=20;
    return 1;
}

int main()
{
    int number[] = {4, 5, 6, 7, 8, 9};
    int n = 6;

    addTen(number,n);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("[%p] = %d\n",number + i, *(number + i));
    }
    n = addTwenty(&n);//give address because function recieve pointer
    printf("\nn = %d\n",n);

    
}