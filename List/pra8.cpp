#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main ()
{
    list <int> myList;

    cout << "Enter 5 Number : ";

    int i = 1;
    while (i <= 5)
    {
        int num = 0;
        cin >> num;
        myList.push_back(num);
        i++;
    }

    int num = 0;
    int index = 0;

    cout << "Enter Number : ";
    cin >> num;

    cout << "Enter Index : ";
    cin >> index;

    auto it = myList.begin();
    advance(it, index);
    myList.insert(it, num);

    cout << "\nList : ";
    for (auto x : myList)
    {
        cout << x << " ";
    }
    return 0;
}