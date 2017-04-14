#include <map>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nr=0;
    cin>>nr;
    
    vector<string> rocks(nr);
    vector<char>::iterator chiter;
    for(int i = 0 ; i < nr ; ++i){
        string str;
        cin>>str;
        rocks[i]=str;
    }
    map<char,int> ac;
    
    // 97~122 a - z
    for(char i = 97 ; i <= 122 ; ++i){
        ac.insert(make_pair(i, 0));
    }
    
    
//    for(int i = 0 ; i < rocks.size(); ++i){
//        for(int j=0 ; j < rocks[i].size(); ++j){
////            chiter = find(rocks[i].begin(),rocks[i].end(),rocks[i][j]);
////            ac[*chiter]+=1;
//        }
//    }
    for(int i = 0 ; i < rocks.size(); ++i){
        for(char a='a'; a<='z';++a){
        chiter = find(rocks[i].begin(),rocks[i].end(),a);
            ac[ *chiter ]+=1;
        }
    }
    
    for(char i = 'a' ; i < 'z'; ++i){
        cout<<i<<" : "<<ac[i]<<endl;
    }
    
    
    int count=0;
    for(char i='a'; i <='z' ; ++i){
        if(ac[i] >= nr){
            count++;
        }
    }

    cout<<count<<endl;
    return 0;
}
