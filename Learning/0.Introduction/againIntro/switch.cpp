#include <iostream>
using namespace std;
int main()
{
    char button;
    cin >> button;
    switch (button){
    case 'a':
        cout << "Hello";
        break;
    case 'b':
        cout << "Konichiwa";
        break;
    case 'c':
        cout << "Yoroshikun";
        break;

    default:
        cout << "Nothing left to loose";
        break;
    }
}