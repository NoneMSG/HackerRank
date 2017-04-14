#include <cmath>
#include <cstdio>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> fibolist;
int main() {
    int cs;
    cin>>cs;
    vector<int> numlist(cs);
    for(int i = 0 ; i < cs ; ++i){
        cin>>numlist[i];
    }
    //sort(numlist.begin(),numlist.end());
    int maxele=*max_element(numlist.begin(), numlist.end());
    
    int n1 = 0;
    int n2 = 1;
    int num=0;
    while(num <=maxele){
        num = n1+n2;
        fibolist.push_back(num);
        //cout<<num<<endl;
        if(num==maxele){break;}
        
        n1=n2;
        n2=num;
    }
    //cout<<endl;
    //cout<<fibolist.size()<<endl;
//    for(int i = 0 ; i < fibolist.size();++i){
//        cout<<fibolist[i]<<endl;
//    }
    for(int i = 0 ; i < numlist.size();++i){
        
        vector<int>::iterator it;
        it=find(fibolist.begin(),fibolist.end(),numlist[i]);
        if( *it != numlist[i]){
            cout<<"IsNotFibo"<<endl;
        }else{cout<<"IsFibo"<<endl;}
    }
    
    
    
    return 0;
}
