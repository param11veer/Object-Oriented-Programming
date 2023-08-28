#include<stdio.h>
#include<string.h>

struct std
{
    char a;
    char b;
    int c : 2; //bit sequencing
    char d;
}__attribute__((packed)); //used to remove padding in structures

struct std s1;

int main()
{
    printf("%lu \n",sizeof(s1)); // lu for unsigned long int 
    return 0;
}