#include<bits/stdc++.h>
using namespace std;

int main(){
    long int  n; cin>>n;;
    string str;
    for(int i=0; i<n; i++){
            cin>>str;
            if(str.length() > 10){
                cout<<str[0]<<str.length() - 2<<str.at(str.length()-1)<<endl;
            }
            else{
                cout<<str<<endl;
            }
    }
}
