// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     FILE *ptr; // using uppercase cuz it's a pointer variable
//     // ptr = fopen("bron.txt", "r"); //r here is the read mode which means agr file h to read krega
//     ptr = fopen("bron.txt", "w"); // w is basically write mode which means if there is no file then it will create it or if it is present then it will delete everything in it to become as new
//     if (ptr != NULL)
//         printf("File opened successfully");
//     else
//     {
//         printf("File not found");
//     }
//     char a[50];
//     printf("\nEnter a string\n");
//     gets(a);

//     for (int i = 0; i < strlen(a); i++)
//     {
//         fputc(a[i], ptr);
//     }
//     fclose(ptr);
//     return 0;
// }




#include <stdio.h>
#include<string.h>
int main()
{
    FILE *ptr; // using uppercase cuz it's a pointer variable
    // ptr = fopen("bron.txt", "r"); //r here is the read mode which means agr file h to read krega
    ptr = fopen("bron.txt", "a"); // a is basically append mode when open and edit a file using this previous data dont get washed away like in the case of w
    if (ptr != NULL)
        printf("File opened successfully");
    else
    {
        printf("File not found");
    }
    char a[50];
    printf("\nEnter a string\n");
    gets(a);

    for (int i = 0; i < strlen(a); i++)
    {
        fputc(a[i], ptr);
    }
    fclose(ptr);//it closes the file so that you can see the edited file
    return 0;
}