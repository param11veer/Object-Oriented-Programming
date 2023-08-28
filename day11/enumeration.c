// #include<stdio.h>
// #include<string.h>

// enum months {January = 1, February, March, April, May, June, July, August, September, October, November, December};

// enum months today;


// int main()
// {
//     // for (int i = January; i<= December; i++){
//     //     printf("%d\n",i);
//     // }

//     /*
//         no without using any system defined variable
//     */

//     for (today=January; today<=December; ++today){
//         printf("%d\n",today);
//     }   
//     return 0;
// }




/*
    For printing numbers as well as printing the values
*/

#include<stdio.h>
#include<string.h>

enum months {January = 1, February, March, April, May, June, July, August, September, October, November, December};

enum months today;

int main(){
    char month[12][10] = {"January","February","March","April","May","June","July","August","September","october","November","December"};
    for (today=January; today<=December; ++today){
        printf("%d\t%s\n", today,month[today-1]);
    }
    return 0;
}