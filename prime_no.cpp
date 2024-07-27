#include<iostream>
using namespace std;
int main (){
    int n,m,i,j,count=1;
    cout<<"Enter the starting number ";
    cin>>n;
    cout<<"Enter the ending number";
    cin>>m;
      for (j = n; j <= m; j++) {
            count = 0;
            for (i = 1; i <= j; i++) {
                if (j % i == 0) {
                    count++;
                }
            }
            if (count == 2)
                cout<<j ;
    
}
 return 0;
}