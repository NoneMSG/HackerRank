#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void get_median(vector<int> _ar){
    sort(_ar.begin(),_ar.end());
    
    int mid = _ar.size() / 2;
    
    cout<<_ar[mid]<<endl;
}

int main() {
    int n;
    vector<int> ar;
    cin>>n;
    
    for(int i = 0 ; i  < n ; ++i){
        int num;
        cin>>num;
        ar.push_back(num);
    }
    
    get_median(ar);
    
    return 0;
}

