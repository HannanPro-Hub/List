#include<iostream>
#include<list>

using namespace std;

int main ()
{
    list <int> myList;

    cout << "Enter 10 Number : ";

    int i = 1;
    while (i <= 10)
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

    myList.sort();
    myList.unique();

    cout << "\nUnique List : ";
    for (auto x : myList)
    {
        cout << x << " ";
    }


    return 0;
}