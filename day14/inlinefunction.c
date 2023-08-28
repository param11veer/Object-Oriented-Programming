// #include<stdio.h>

// static inline void sum (int i, int j)
// {
//     printf("Sum = %d", i+j);
// }

// int main()
// {
//     int n,m;
//     printf("Enter first number : ");
//     scanf("%d",&n);
//     printf("Enter second number : ");
//     scanf("%d",&m);
//     sum(n,m);
// }


/*
    Wap to print sum of array using inline function
*/

/*
    wap using inline function to print reverse and in uppercase char ch[15] = "group21";
*/

#include <stdio.h>
#include<string.h>

static inline void sum(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; ++i) {
        s += arr[i];
    }
    printf("Sum of array is : %d",s);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sum(arr, n);
    // printf("Sum of array is %d.", sum(arr, n));
    return 0;
}
