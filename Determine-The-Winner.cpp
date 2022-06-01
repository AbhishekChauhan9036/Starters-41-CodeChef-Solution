#include<bits/stdc++.h>
#define lol long long int

using namespace std;
int main(){
    int caset;
    cin>>caset;
    while(caset--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(max(a,b)>max(c,d)){
            cout<<"Q"<<endl;
        }else if(max(a,b)<max(c,d)){
            cout<<"P"<<endl;
        }else{
            cout<<"TIE"<<endl;
        }
    }
    return 0;
}