#include <iostream>

using namespace std;

void insertion(int a[], int n){

    for(int i=1; i<n; i++){
        int e = a[i];
        int j = i-1;
        while(j>=0 && a[j] > e){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = e;
    }
}

int main(){
    int n;
    int a[1000];
    cout<<"Enter the no. of elements ";
    cin>>n;
    cout<<"\nEnter the elements of Array: ";
    for (int i = 0; i < n; ++i)
        cin>>a[i];
    insertion(a,n);
    cout<<"\nArray After Insertion Sort: ";

    for(int i=0; i<n; i++)
        cout<<a[i]<< " ";
return 0;
}



