/*
    Write a program to print the transpose of the matrix entered by the user
*/

// #include <stdio.h>
// int main()
// {
//     int r;
//     printf("Enter the number of rows : ");
//     scanf("%d", &r);
//     int c;
//     printf("\n Enter the number of columns:  ");
//     scanf("%d", &c);
//     printf("Enter all the elements\n");
//     int arr[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; ++j)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < c; i++)
//     { // changing the limits here from r->c and c->r so that columns rows bn jaaye and rows column
//         for (int j = 0; j < r; j++)
//         {
//             printf("%d ", arr[j][i]);
//         }
//         printf("\n");
//     }
// }

/*
    WAP to change the given nxm matrix to its transpose
*/

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows/columns : ");
//     scanf("%d", &n);
//     printf("Enter all the elements\n");
//     int arr[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



/*
    WAP to rotate a matrix 90 degree clockwise

    HINT:- First convert it into transpose and then reverse every row in transposed matrix 
*/

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of rows/columns : ");
//     scanf("%d",&n);
//     printf("Enter all the elements\n");
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++ ){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     //transpose
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     //rotate
//     for(int i=0;i<n;i++){
//         int j = 0;
//         int k = n - 1;
//         while (j<k){
//             //swap arr[i][j] and arr[i][k]
//             int temp = arr[i][j];
//             arr[i][j] = arr[i][k];
//             arr[i][k] = temp;
//             j++;
//             k--;
//         }
//     }
//     printf("\n");
//     //output
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



/*
    WAP to print the multiplication of two matrices given by the user
*/


