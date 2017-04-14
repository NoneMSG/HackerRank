#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    
    
    int i = 0 ;
    while( s[i]==t[i] )
    {
        if(s[i]!=t[i]){
            break;
        }
        i++;
    }
    
    int del = s.size()-i;
    int apd = t.size()-i;
    cout<<del<<endl;
    cout<<apd<<endl;
    if( del+apd <= k ){cout<<"Yes"<<endl;}else{cout<<"No"<<endl;}
//    int del = s.size() - i;
//    int apd = i;
//    cout<<del<<endl;
//    cout<<apd<<endl;
//    if( (del+apd) >= k ){
//        cout<<"Yes"<<endl;
//    }else{cout<<"No"<<endl;}
    //int apd = del
    // if(count <= t.size()){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
    //cout<<count<<endl;
    
    
    return 0;
}

