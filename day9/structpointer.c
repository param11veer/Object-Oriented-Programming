// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     int roll;
//     char name[20];

// };

// struct student s1={12, "Neeraj"};


// int main()
// {
//     /* code */
//     struct student *s2=&s1;
//     printf("Roll number of %s is %d", s2->name, s2->roll); /*or you can use (*s2).name, (*s2).roll also */
//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     int roll;
//     char name[20];

// };

// void display(int a, char b[20])
// {
//     printf("Name of the Student is : %s\n",b);
//     printf("Roll no. of the student is : %d\n",a);
// }


// int main()
// {
//     /* code */
//     struct student s1;
//     printf("enter roll no. and name of the student \n");
//     scanf("%d %s, &s1.roll, s1.name");
//     display(s1.roll,s1.name);
//     return 0;
// }








#include <stdio.h>
#include <string.h>

struct employee
{
    int salary;
    char name[20];

};


void display(struct employee s2)
{
    printf("Name of the employee is : %s\n",s2.name);
    printf("Salary of the student is : %d\n",s2.salary);
}


int main()
{
    /* code */
    struct employee s1;
    printf("enter the salary and name of the employee \n");
    scanf("%d %s, &s1.roll, s1.name");
    display(s1);
    return 0;
}

