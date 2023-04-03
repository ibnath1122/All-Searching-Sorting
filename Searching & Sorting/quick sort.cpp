#include<iostream>
using namespace std;
int x[]= {7,3,1,9,11,4,5,15,14};


int partition (int l, int h)
{
    int pivot = x[l];
    int i=l;
    int j=h;

    while(i<j)
    {
        while(x[i]<=pivot)
        {
            i++;
        }
        while(x[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            swap(x[i], x[j]);
        }
    }
    swap(x[j], x[l]);
    return j;
}

void Quicksort(int l, int h)
{
    if(l<h)
    {
        int j= partition(l, h);
        Quicksort( l, j-1);
        Quicksort(j+1, h);
    }
}


int main()
{
    cout<< "Before Sorting:" << endl;
    for(int i=0; i<=8; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    Quicksort(0,8);
    cout<< "After Sorting:" << endl;
    for(int i=0; i<=8; i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

