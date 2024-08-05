#include <iostream>
using namespace std;
class Employee{
    int Salary[10];
    public:
    int EmpID[10];
    string name[10];
    char G[10];
    void enter_detail(){
        for(int i=0;i<10;i++){
        cout<<" Enter the name: ";
        cin>>name[i];
        cout<<" Enter the gender: ";
        cin>>G[i];
        cout<<" Enter the empID: ";
        cin>>EmpID[i];
        cout<<" Enter the salary: ";
        cin>>Salary[i];
        }
    }
    void set_salary(int sal,int i){
        Salary[i]=sal;
    }
    void display_detail(){
        for(int i=0;i<10;i++){
        cout<<name[i]<<" "<<G[i]<<" "<<EmpID[i]<<" "<<Salary[i]<<endl;
           }   }
};
int main(){
    Employee obj;
    obj.enter_detail();
    obj.display_detail();
    obj.set_salary(20000,1);
    cout<<"UPDATED DETAILS"<<endl;
    obj.display_detail();
    return 0;
}