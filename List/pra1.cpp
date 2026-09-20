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

    cout << "Elements : ";
    for (auto x : myList)
    {
        cout << x << " ";
    }

    cout << "\nFirst Element : " << myList.front();
    cout << "\nLast Element : " << myList.back();

    cout << "\nSize : " << myList.size();


    return 0;
}