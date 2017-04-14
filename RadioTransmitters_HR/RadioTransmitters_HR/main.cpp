/*
 For those having trouble I recommend the following implementation with linked lists:
 
 1. Create an array of nodes
 2. Sort the nodes
 3. Create the links
 4. Find the first house before the next is out of range from the head and give them a radio
 5. Find the first house before the next is out of range from the trasnmitting house and make them the head
 
 Repeat 4 - 5 while the head exists
 
 */

#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> x(n);
    for(int x_i = 0;x_i < n;x_i++){
        cin >> x[x_i];
    }
    
    sort(x.begin(),x.end());
    int count=0;
    for(int i = 1 ; i < x.size(); ++i){
        
        int c1 = x[i] - k ;
        int c2 = x[i] + k ;
        
        if( c2 <= x[i+1] && x[i-1] <= c1 ){
            count+=1;
        }else {
            continue;
        }
    }
    cout<<count<<endl;
    return 0;
}

