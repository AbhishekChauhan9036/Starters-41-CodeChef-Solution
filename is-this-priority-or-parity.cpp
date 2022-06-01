#include<bits/stdc++.h>
#define lol long long int

using namespace std;
int main(){
    int caset;
    cin>>caset;
    while(caset--){
    long long int lll,llll;
      cin>>lll>>llll;
     
    if (llll == 1) {
        if (lll % 2 == 0) {
            cout <<"Even"<<endl;
        } else {
            cout<<"Odd"<<endl;
        }
    } else if (llll== 2) {
        cout<<"Odd"<<endl;
    } else {
        cout <<"Even"<<endl;
    }
    }
    return 0;
}