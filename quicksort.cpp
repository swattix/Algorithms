#include <bits/stdc++.h>
using namespace std;

void quicksort(int[], int, int);
int partition(int[], int, int);
void interchange(int[], int, int);

void quicksort(int a[], int low, int high){
    int pivot;
    if( low < high){
        pivot = partition(a, low, high+1);
        quicksort(a, low, pivot-1);
        quicksort(a, pivot+1, high);
    }
}

int partition(int a[], int low, int high){
    int pivot = a[low];
    int up = low, down = high;
    
    do {
        do
            up++;
        while(a[up] < pivot);
        
        do
            down--;
        while(a[down] > pivot);
        
        if(up < down)
            interchange(a, up, down);
    
    }while(up < down);
    
    a[low] = a[down];
    a[down] = pivot;
    return down;
}

void interchange(int a[], int l, int h){
    int temp;
    temp = a [l];
    a[l] = a[h];
    a[h] = temp;
    
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int a[n];
    cout << "\nEnter the array elements : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    quicksort(a, 0, n-1);
    
    cout << "\nThe elements after quick sorting are : ";
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';

    return 0;
}
