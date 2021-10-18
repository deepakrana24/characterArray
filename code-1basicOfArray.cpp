#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    char arr[] = "abc ";
    char a[1000];
    cout << arr << endl;
    cout << endl;
    // work second
    // cout << "enter some " << endl;
    // cin >> arr;
    // cout << "after adding " << arr << endl;
    /// work 3  add full string including spaces
    cout << "enter the string with space " << endl;
    char temp = cin.get();
    int l = 0;
    while (temp != '\n')
    {
        l++;
        cout << temp;

        temp = cin.get();
    };
    cout << endl;
    cout << l << endl;

    return 0;
}