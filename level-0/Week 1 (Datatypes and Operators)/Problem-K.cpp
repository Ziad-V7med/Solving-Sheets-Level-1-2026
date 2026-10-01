#include <iostream>
using namespace std; 

int main(){
   int n; cin>>n;
   int cnt=0;
   cnt+=n/50;
   n-=cnt*50;
   int x=n/20; 
   cnt+=x;
   n-=x*20;
   cnt+=n;  
   cout<<cnt<<endl;
    return 0; 
    
}




