#include <iostream>
using namespace std;

int main() {
int n,i,j;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
     for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
    cout<<"The array after sorting"<<endl;
    for(int i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        swap(arr[j],arr[j+1]);
                    }
                }
        }
    for(i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
}
