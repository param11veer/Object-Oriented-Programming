#include<iostream>
using namespace std;

int main()
{
    /*
        WAP to print solid rectangle/square
    */

   /*
    int n,m;
    cout<<"Enter the number of rows: "; 
    cin>>n;
    cout << "Enter the number of columns: ";
    cin >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    */

    /*
        HOLLOW RECTANGULAR PATTERN
    */

    int n,m;
    cout<<"Enter the number of Rows: "<<endl;
    cin >> n;
    cout << "Enter the number of Columns: "<<endl;
    cin >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if (i==1 || j ==1 || i==n || j==m){
                cout<<"* ";
            }
            else {
                cout<<"  ";
            }
        }
        cout << endl;
    }
    return 0;
}