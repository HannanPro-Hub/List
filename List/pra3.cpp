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

    cout << "Before Removal : ";
    for (auto x : myList)
    {
        cout << x << " ";
    }

    cout << "\n";

    i = 1;

    while (i <= 2)
    {
        myList.pop_front();
        myList.pop_back();
        i++;
    }

    cout << "After Removal : ";
    for (auto x : myList)
    {
        cout << x << " ";
    }

    cout << "\n";

    cout << "\nSize : " << myList.size();

    return 0;
}