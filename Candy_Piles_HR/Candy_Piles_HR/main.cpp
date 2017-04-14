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
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
        cin >> c[c_i];
    }
    /*
     1. choose minimum number of candies
     2. double the minimum candies. it becomes maximal.
     3. if there are two elements, compare each. if they are same follow ex1.
     4. If there are only one element which is minimum. make it happiness facotor
     */
    vector<int>::iterator citer;
    
    
    citer=min_element(c.begin(),c.end());
    
    if(c.size()==2){
        if(*citer ==c[1] ){
            cout<<*citer<<" "; cout<<2<<endl;
        }
        
    }else if(c.size()==1){
        cout<<c[0]*2<<" "; cout<<1<<endl;
    }
    else{
        int minN = (*citer) * 2 ;
        int lowestN=0;
        int count=0;
        for(int i = 0 ; i < c.size(); ++i){
            if((*citer) == c[i])
            {
                count++;
            }else if(c[i]< minN){
                lowestN=c[i];
            }
        }
        if(lowestN>0){
            cout<<lowestN<<" "; cout<<1<<endl;
        }else{
            cout<<minN<<" "; cout<<count<<endl;
        }
        count=0;
    }
    
    return 0;
}

