#include<iostream>
using namespace std;
void display(int a[], int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        cout << a[i] << endl;
    }
}
int insertion (int a[] , int n , int ind , int val )
{
    for ( int i = n -1  ; i >= ind ; i-- )
    {
        a[i+1]=a[i];
        
    }
    a[ind]=val;
    return 0;
}
int main ()
{
    int a[] = {1,2,3,4,5,6,7,8,9} ;
    int n = sizeof (a)/sizeof(a[0]);
    int value ;
    int index;
    cout<< "enter the index : "<< endl;
    cin>>index ;
    cout << "\nenter the value : "<< endl ;
    cin >> value ;
    cout << "\n array before the insertion" <<endl ;
    display(a,n);
    insertion(a,n,index,value);
    printf("\n array after the insertion\n");
    n = n + 1; 
    display(a,n);
    
    
    return 0;
}
