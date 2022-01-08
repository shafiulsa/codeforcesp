#include<bits/stdc++.h>
using namespace std;
int main(){

    string st;
    cin>>st;
    for(int i=0;st[i]!=NULL;i++){
        if(st[i]=='a' || st[i]=='e'|| st[i]=='i'||st[i]=='o'|| st[i]=='u'||st[i]=='y'){
            continue;
        }
        if(st[i]=='A' || st[i]=='E'|| st[i]=='I'||st[i]=='O'|| st[i]=='U'||st[i]=='Y'){
            continue;
        }
        else{
            if(st[i]>=65 && st[i]<=96){
                char ch='0';
                ch=st[i]+32;
                cout<<"."<<ch;
            }
            else{
                 cout<<"."<<st[i];
            }
        }
    }
    return 0;
}
