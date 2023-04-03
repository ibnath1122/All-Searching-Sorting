#include<bits/stdc++.h>
using namespace std;


void selSort(int ar[], int arSize)
{
    for(int pass=0; pass<arSize-1; pass++)
    {
        int minInd=pass;
        for(int j=pass+1; j<arSize; j++)
        {
            if(ar[j]>ar[minInd])
            {
                minInd=j;
            }
        }

        if(minInd!=pass)
        {
            swap(ar[pass], ar[minInd]);
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

    selSort(arr,arrSize);

    cout << "After sorting: ";
    printAr(arr,arrSize);

    return 0;
}
