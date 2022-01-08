#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
  
    int x=0;
    for(int i=1;i<=t;i++){
          string ch;
        cin>>ch;
        if(ch=="++X" || ch=="X++"){
            x++;
        }
        else if(ch=="X--"|| ch=="--X"){
            x--;
        }
        
    }
    cout<<x<<endl;
    return 0;
}