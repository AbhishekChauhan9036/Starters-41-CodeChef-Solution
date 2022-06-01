#include<bits/stdc++.h>
#define lol long long int

using namespace std;
int main(){
    int caset;
    cin>>caset;
    while(caset--){
          int lll, llll, increment=0; 
          
        cin>>lll>>llll; 
         


        while(lll!=llll) { 
            if(lll<llll) { 
                int newtonschool = llll-lll; 

                increment += newtonschool; 

                lll += newtonschool; 
            } 
             


            if(llll<lll) { 

                if(lll-llll == 1) { 

                    llll += 2; 

                    increment++; 

                } else { 

                    int newtonschool = (lll-llll)/2; 

                    increment += newtonschool; 

                    newtonschool *= 2; 

                    llll += newtonschool; 
                } 
            } 
        } 
         


        cout<<increment<<endl;


    }
    return 0;
}