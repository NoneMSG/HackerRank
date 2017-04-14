#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void partition(vector <int>  ar) {
    vector<int> left;
    vector<int> right;

    int pivot = ar[0];
    for(int i = 1 ; i < ar.size();i++){
        
        
        if( pivot < ar[i] )
        {
            right.push_back(ar[i]);
        }else if( pivot > ar[i]){
            left.push_back(ar[i]);
        }else if( pivot == ar[i]){
            break;
        }
        
    }
    for(int i = 0 ; i < left.size(); i++){
        cout<<left[i]<<" ";
    }cout<<pivot<<" ";
    for(int i= 0; i < right.size(); i++){
        cout<<right[i]<<" ";
    }cout<<endl;
    
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }
    
    partition(_ar);
    
    return 0;
}

