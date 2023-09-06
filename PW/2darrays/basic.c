/*
    Creating a 2d array and printing
*/

// #include <stdio.h>
// int main()
// {
//     int arr[3][3] = {{1, 2, 3}, {3, 4, 5}, {4, 5, 6}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
    giving input for 2d array
*/

// #include <stdio.h>
// int main()
// {
//     int arr[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf(" %d\t", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
    Write a program to store roll number and marks obtained by 4 students side by side in a matrix
*/

/*
    Write a program to store 10 at every index of a 2d matrix with 5 rows and 5 columns.
*/

// #include <stdio.h>
// int main()
// {
//     int arr[5][5];
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n");
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
    WAP to add two matrix
*/

// #include <stdio.h>
// int main()
// {
//     int arr[2][2] = {1, 2, 3, 4};
//     int brr[2][2] = {5, 6, 7, 8};
//     printf("\n");
//     int res[2][2];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             res[i][j] = arr[i][j] + brr[i][j];
//         }
//         printf("\n");
//     }
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ",res[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

/*
    Given a matrix having 0-1 only, find the row with the maximum number of 1's
*/

// #include <stdio.h>
// int main()
// {
//     int arr[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 0, 0, 1}};
//     int maxCount = 0;
//     for (int i = 0; i < 3; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < 4; j++)
//         {
//             if ((arr[i][j] == 1))
//                 count++;
//         }
//         if (maxCount < count)
//         {
//             maxCount = count;
//         }
//         printf("\n");
//     }
//     printf("%d", maxCount);
//     return 0;
// }


