#include <iostream>
using namespace std; 

int main(){
   char c; cin>>c;
   int s; cin>>s; 
   int x=c-'a'; 
   x+=s;
   x=x%26;
   char ans=x+'a'; 
   cout<<ans<<endl;
   return 0; 
    
}





