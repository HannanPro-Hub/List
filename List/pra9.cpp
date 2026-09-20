#include<iostream>
#include<list>
#include<iterator>

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

    int index = 0;

    cout << "Enter Index : ";
    cin >> index;

    auto it = myList.begin();
    advance(it, index);

    myList.erase(it);

    cout << "\nList : ";
    for (auto x : myList)
    {
        cout << x << " ";
    }
    return 0;
}