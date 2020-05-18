#include<iostream>

using namespace std;

int n=5;

template<class T>

T largest(T arr[],int n) 

{ 

    int i; 

    T m = arr[0]; 

    for (i = 0; i <= n; i++) 

        if (arr[i] > m) 

            m = arr[i]; 

    return m; 

} 



int main() 

{ 

    int arr[100];

    char brr[5];

    double crr[5];

    cout<<"Enter the array of 5 : \n";

    for(int i=0;i<n;i++)

    {

        cin>>arr[i];

    }

    cout<<"Largest in given array is "<<largest(arr, n)<<endl; 

    cout <<"Character values :\n";

    for(int j=0; j < n; j++)

    {

          cin >> brr[j];

    }

	cout<<"Character largest is : "<<largest(brr,n)<<endl;

    cout <<"Decimal values: \n";

    for(int k=0; k < n; k++)

    {

        cin >> crr[k];

    }

    cout<<"Double largest is : "<<largest(crr,n)<<endl;

    return 0; 

}
