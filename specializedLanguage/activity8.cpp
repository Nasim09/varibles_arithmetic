#include <iostream>
using namespace std;

int main () { 
    int milesTraveled;
    int hoursToDrive;

    cout << "Type a number";
    cin >> milesTraveled; 
    hoursToDrive = (milesTraveled / 60);
    cout << hoursToDrive ; 
    return 0;
}