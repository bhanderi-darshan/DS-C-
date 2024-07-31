#include<iostream>
using namespace std;

void display(int arr[],int size)
{
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}

int searching (int arr[],int size,int key)
{
    for(int i=0;i<size;i++){
    if(arr[i]==key){
        return i;
    }
}
return -1;
}

void insertion(int arr[],int& size,int capacity,int position,int element){
    if(size>=capacity){
        cout<<"Array is full";
        return;
    }
    if(position<0 ||position>size){
        cout<<"Invalide position";
        return;
    }
for(int i=size;i>position;i--){
    arr[i]=arr[i-1];
}
arr[position]=element;
size++;
}


void deletion(int arr[],int& size,int pos){
    
    if(pos<0 ||pos>size){
        cout<<"Invalide position";
        return;
    }
for(int i=pos;i<size;i++){
    arr[i]=arr[i+1];
}

size--;
}







int main (){
int capacity=10, size=5,element =10,position=0,pos=1;
int arr[capacity]={2,5,3,8,3};
cout<<"Display the arr : ";
display(arr,size);
cout<<endl;
cout<<"Searching an element : ";
int key =5;
int a=searching(arr,size,key);
if(a>-1){
cout<<"The element present at index :"<<a<<endl;
}
else {
    cout<<"Element not found";
}
insertion(arr,size,capacity,position,element);
cout<<"After insertion ";
display(arr,size);
cout<<endl;
deletion(arr,size,pos);
cout<<"After deletion :";
display(arr,size);

}