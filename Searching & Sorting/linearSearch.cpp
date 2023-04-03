#include<iostream>
using namespace std;

int linearSearch(int array[], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        if (key==array[i])
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int a[] = {9, 7, 8, 31, 27, 16, 12, 23, 6, 3};

    int key;
    cout << "Enter the value you want to search: ";
    cin >> key;
    int result = linearSearch(a, 10, key);

    if(result >= 0)
    {
        cout << "Item is in the array" << endl;
    }
    else
    {
        cout << "Item is not in the array" << endl;
    }

    return 0;
}
