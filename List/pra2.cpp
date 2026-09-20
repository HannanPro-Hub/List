#include<iostream>
#include<list>

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

    i = 2;
    while (i >= 1)
    {
        int num = 0;
        cout << "Enter " << i << " Elements More : ";
        cin >> num;
        myList.push_front(num);
        i--;
    }

    cout << "Final List : ";
    for (auto x : myList)
    {
        cout << x << " ";
    }

    cout << "\nFirst Element : " << myList.front();
    cout << "\nLast Element : " << myList.back();


    return 0;
}