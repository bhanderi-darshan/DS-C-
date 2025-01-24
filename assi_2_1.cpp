#include<iostream>
using namespace std;
void Traversal(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    Traversal(arr,size);
    return 0;
}
