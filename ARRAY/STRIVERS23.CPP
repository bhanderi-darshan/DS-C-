#include<iostream>
using namespace std;

int leaders(int size,int arr[]){
    for(int i=0;i<size;i++){
     bool  ld=true;
        for(int j=i+1;j<size;j++){

if(arr[j]>arr[i]){
    ld=false;
    break;
}
        }
    if(ld==true){
        cout<<arr[i]<<"     ";
    }
}}
int main(){
    int size=5;
    int arr[]={45,25,4,3,10};
 leaders(size,arr);
return 0;
}