#include<iostream>
using namespace std;

class Book{
    public:
string titel;
string author;
int isbn;
string status;
void ditels_book(){
    cout<<"Title: "<<endl;       
    cin>>titel;
    cout<<"Author: "<<endl;
    cin>>author;
    
}
void disp_book(){

    cout<<"Title: "<<titel<<endl;
    cout<<"Author: "<<author<<endl;
    cout<<"ISBN: "<<isbn<<endl;
    cout<<"Status: "<<status<<endl;



}
};
 
