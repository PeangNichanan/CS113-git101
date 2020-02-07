//FUNCTION

#include <stdio.h>

//Address 0-200,000 >>> memory
//ctype.h >>> check type 

int x = 100;//this 'x' is global

//first function
// Declare function
int addTen(int x)
{
    x = x+10;
    return x;
}

//second function 
//Declare function but put statement later
int addTwenty();

//Declare function main
int main()
{
    int x= 30;
    //this 'x' is local in main
    int y = addTen(x);
    //go to first function
    printf("addTen main = %d\n",y);
    int z = addTwenty(x);
    //go to second function
    printf("addTwenty main = %d\n",z);
}    

//stament from function "addTwenty()"
int addTwenty()
{
    x = x+20;
    printf("x addTwenty main = %d\n",x);
    return x;
}

