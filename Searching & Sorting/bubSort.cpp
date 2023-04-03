#include<bits/stdc++.h>
using namespace std;

void bubSort(int ar[], int arSize)
{
    for(int i=0; i<arSize-1; i++)
    {
        int flag=0;
        for(int j=0; j<arSize-1-i; j++)
            //write your code here
        {

            if(ar[j]<ar[j+1])
            {
                swap(ar[j], ar[j+1]);
                flag=1;

            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

void printAr(int ar[], int arSize)
{
    for (int i=0;i<arSize;i++)
    {
        cout << ar[i] <<" ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2,7,4,1,5,3};
    int arrSize = 6;

    cout << "Before sorting: ";
    printAr(arr,arrSize);

    bubSort(arr,arrSize);

    cout << "After sorting: ";
    printAr(arr,arrSize);

    return 0;
}
