#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
    int q;
    cin>>q;
    int x,y;
    
    while(q--){
        cin>>y>>x;
        if(y==1){
            s.insert(x);
        }else if(y==2){
            s.erase(x);
        }else if(y==3){
            set<int>::iterator itr = s.find(x);
            if(itr == s.end()){
                cout<<"No\n";
            }else{
                cout<<"Yes\n";
            }
        }
    }  
    return 0;
}



