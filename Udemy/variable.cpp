// #include <iostream>
// #include <math.h>
// using namespace std;
// // This program will calculate the area of a room in SQ. feet
// int main()
// {
//     int side;
//     cout << "Enter the sides of the square: ";
//     cin >> side;
//     double area = pow(side,2); // Calculate Area using formula (a^2)
//     cout << "The area of the square is: " << area << " Square feet" << endl;
//     return 0;
// }



#include <iostream>
using namespace std;

int main()
{
    cout << "Hello, Welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned?\n";
    int number_of_rooms{0};
    cin >> number_of_rooms;
    cout << "===================================" << endl;
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << 30 << endl;
    cout << "Cost: $" << 30 * number_of_rooms << endl;
    cout << "Tax: $" << 30 * number_of_rooms * 0.06 << endl;
    cout << "\n===================================" << endl;
    cout << "\nTotal estimate: $" << (30 * number_of_rooms) + (30 * number_of_rooms * 0.06) << endl;
    cout << "This estimate is valid for " << 30 << " days" << endl;

    return 0;
}