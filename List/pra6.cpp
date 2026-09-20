#include<iostream>
#include<list>

using namespace std;

int main ()
{
    list <int> myList;

    cout << "Enter 8 Number : ";

    int i = 1;
    while (i <= 8)
    {
        int num = 0;
        cin >> num;
        myList.push_back(num);
        i++;
    }

    cout << "\nOriginal List : ";
    for (auto x : myList)
    {
        cout << x << " ";
    }

    myList.reverse();
    cout << "\nReverse Order : ";
    for (auto x : myList)
    {
        cout << x << " ";
    }

    return 0;
}