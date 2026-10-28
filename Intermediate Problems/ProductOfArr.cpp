#include<iostream>
using namespace std;
int main(){
    int arr[] = {9,4,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int Product = 1;
    for(int i=0;i<n;i++){
        Product *= arr[i];
        
    }
    cout<<"Product : "<<Product;

}