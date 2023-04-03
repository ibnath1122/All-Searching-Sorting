#include<bits/stdc++.h>

using namespace std;

bool binSer(int a[],int lo, int Hi, int key)
{
    sort(a, a+lo+Hi+1);
    while(lo<=Hi)
    {
        int mid=(lo+Hi)/2;
        if(a[mid]>key)
        {
            Hi=mid-1;
        }
        else if(a[mid]<key)
        {
            lo=mid+1;
        }
        else if(a[mid]==key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {93, 87, 81, 37, 30, 15, 14, 13, 6, 3};
    int low = 0;
    int high = 9;

    int key;
    cout << "Enter the value you want to search: ";
    cin >> key;

    bool status = binSer(arr, low, high, key);
    if(status == true)
    {
        cout << "Item is in the array" << endl;
    }
    else
    {
        cout << "Item is not in the array" << endl;
    }

    return 0;
}
