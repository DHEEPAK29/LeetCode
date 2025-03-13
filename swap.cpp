#include<iostream>
#include<algorithm> 
using namespace std; 

int main(){ 
    int dim =3; 
    int arr [] = {1,3,2,33,34,112,3444}; 

    dim = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<dim/2; i++){
        cout<<arr[i] << arr[dim-i-1]<<endl;
        swap(arr[i], arr[dim-i-1]); 
        cout<<arr[i] << arr[dim-i-1]<<endl;
    }

    for(int i=0; i<dim; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}