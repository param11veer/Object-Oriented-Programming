/*
    Example for pass by value
*/

// #include<stdio.h>

// void fun(int a ){
//     a = 7;
//     return;
// }
// int main(){
//     int a = 4;
//     printf("%d\n",a);
//     fun(a);
//     printf("%d\n",a);
//     return 0;
//     //the output will be 4 and 4 cuz in int pass by value does'nt change the value
// }

// #include<stdio.h>

// void fun(int arr[] ){
//     arr[0] = 10;
//     return;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     printf("%d\n",arr[0]);
//     fun(arr);
//     printf("%d\n",arr[0]);
//     return 0;
//     //in this value will be changed cuz it works on pass by reference
// }

/*
    Given an array of integers, change the value of all odd indexed elements to its second
    multiple and increment all even indexed value by 10.
*/

// #include<stdio.h>

// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     for (int i = 0; i<= 6; i++){
//         if ((i%2) !=  0){
//             arr[i]*=2;
//         }
//         else {
//             arr[i]+= 10;
//         }
//     }
//     for (int i=0;i<=6;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

/*
    Find the difference between the sum of elements at even indices to
    the sum of elements at the odd indices
*/
// #include<stdio.h>
// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     int sumEven = 0;
//     int sumOdd = 0;
//     for (int i = 0 ; i <= 6; ++i ){
//         if (i%2==0){
//             sumEven += arr[i];
//         }
//         else {
//             sumOdd += arr[i];
//         }
//     }
//     printf("%d ", sumEven-sumOdd);
// }

/*
    find the total number of pairs in the array whose sum is equal to the given value X
*/

// #include<stdio.h>

// int main(){
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int totalPairs = 0;
//     int x = 12;//this a user defined value which can also be taken from user
//     for (int i=0;i<=7;i++){
//         for (int j=i+1; j<=7; j++){
//             if (arr[i]+arr[j] == x){
//                 totalPairs++;
//                 printf("(%d,%d)",arr[i],arr[j]);
//             }
//         }
//     }
//     printf("\n So total pairs whose sum is equal to user defined x is %d",totalPairs);
//     return 0;
// }

/*
    count the number of triplets whose sum is equal to the given value x
*/

// #include<stdio.h>

// int main(){
//     int arr[8] = {1,2,3,4,5,6,7,8};
//     int totalTriplets = 0;
//     int x = 12;//this a user defined value which can also be taken from user
//     for (int i=0;i<=7;i++){
//         for (int j=i+1; j<=7; j++){
//             for(int k=j+1;k<=7;++k){
//                 if (arr[i]+arr[j]+arr[k] == x){
//                     totalTriplets++;
//                     printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
//                 }
//             }
//             }
//         }
//         printf("So total pairs whose sum is equal to user defined x is %d",totalTriplets);
//         return 0;
//     }

/*
    find the second largest value in the given string
*/

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for (int i = 0; i <= 6; i++)
//     {
//         if (max < arr[i])
//         {
//             smax = max;   // second max is now the previous max
//             max = arr[i]; // max is now a new max
//         }
//         else if (smax < arr[i] && max != arr[i])
//         { // if this condition runs it means max is greater than arr[i] thats why pehle waala loop nhi chlaa
//             // and condition isliye lgaai h cuz agr jumbled numbers aaye ya koin number repeat hua
//             // to ek wqt pe smax and max ki value same hojaaegi aur hme hmaara desired output nhi milega
//             // thats hmm ne ek extra condition bhi lgaai h
//             smax = arr[i];
//         }
//     }
//     printf("%d", smax);
//     return 0;
// }



/*
    Write a program to copy the contents of one array to another in the reverse order
*/

// #include<stdio.h>
// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     int brr[7];
//     for (int i=0;i<=6;i++){
//         brr[i] = arr[6-i];
//     }
//     for (int i = 0; i<=6; i++){
//         printf("%d ",brr[i]);
//     }
//     return 0;
// }




/*
    Write a program to reverse the array without using any extra array
*/

// #include<stdio.h>

// void reverse(int arr[])
// {
//     int i = 0;
//     int j = 6;
//     while(i<j){
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }

// int main()
// {
//     int arr[7] = {1,2,3,4,5,6,7};
//     reverse(arr);
//     for (int i = 0; i <= 6; i++){
//         printf("%d ",arr[i]);
//     }

// }



/*
   Rotate the given array 'a' by K steps, where K is non-negative.
   NOTE: K can be greater than n as well where n is the size of array 'a'.  
*/

#include<stdio.h>

void reverse(int arr[], int si, int ei){ //si = start index and ei = end index
    for (int i=si, j=ei; i<j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 3;
    //steps
    k = k%n;//this is bcuz 7 element k array ko 7 time reverse krne pe same array hi aaega waaps so uska modulus means remainder nikaalenge to hmaare paas shi answer aaega
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for (int i = 0; i <= 6; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
