/*
    frank's carpet cleaning service
    charges $30 per room
    sales tax rate 6%
    estimates are valid for 30 days

    prompt the user for the number of rooms they would like cleaned
    and provide an estimate such as:

    Estimate for carpet cleaning service:
    Number of rooms: 2
    price per room: $30
    cost: $60
    tax: %3.60
    =====================================================================
    Total estimate: $63.60
    This estimate is valid for 30 days

    Pseudocode:
        prompt the user to enter the number of rooms
        Display number of rooms
        Display price per room

        Display cost: (number of rooms*price per room)
        Display tax: number of rooms*price per room* tax rate
        Display total estimate: (number of rooms*price per room)+(number*price per room*tax rate)
        Display estimate expiration time

*/

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