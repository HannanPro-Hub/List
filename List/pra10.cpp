#include<iostream>
#include<list>
#include<iterator>

using namespace std;

int main ()
{
    list <int> list1;
    list <int> list2;

    cout << "Enter 5 Number For List 1\n";

    int i = 1;
    while (i <= 5)
    {
        int num = 0;
        cin >> num;
        list1.push_back(num);
        i++;
    }

    cout << "\nEnter 3 Numbers For List 2\n";

    i = 1;
    while (i <= 3)
    {
        int num = 0;
        cin >> num;
        list2.push_back(num);
        i++;
    }

    int index = 0;

    cout << "\nEnter Index : ";
    cin >> index;

    auto it = list1.begin();
    advance(it, index);

    list1.splice(it,list2);

    cout << "Combined List : ";
    for (auto x : list1)
    {
        cout << x << " ";
    }
    return 0;
}