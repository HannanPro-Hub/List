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

    cout << "\n";

    int num = 0;
    cout << "\nEnter A Number To Remove : ";
    cin >> num;

    int oldSize = myList.size();

    myList.remove(num);

    if (myList.size() == oldSize)
    {
        cout << "\nNumber Not Found";
    }

    cout << "\nAfter Removal : ";
    for (auto x : myList)
    {
        cout << x << " ";
    }
    return 0;
}