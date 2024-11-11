#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    int pos1;
    cin>>pos1;
    v.erase(v.begin()+pos1 -1);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    
    cout<<v.size()<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}
