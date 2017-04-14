#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// –2147483648부터 ~ 2147483647 : scope of int
// 0 ~ 4294967295 unsigned int's scope
vector<int> flipbin(vector<int> list){
    for(int i = 0 ; i<list.size();++i){
        if(list[i]==0){
            list[i]=1;
        }else{
            list[i]=0;
        }
    }
    
    return list;
}

int main() {
    int T=0; //list size
    cin>>T;
    
    vector<unsigned int> nlist(T);
    
    for(int i = 0 ; i < T ; ++i){
        unsigned int num = 0 ;
        cin>>num;
        nlist[i]=num;
    }
    
    for(int z = 0 ; z < nlist.size(); ++z){
    
    vector<int> bin(32);

        
        int j = 31;
        while(nlist[z]!=0){
            bin[j] = nlist[z]%2;
            nlist[z]/=2;
            j--;
        }
        
            bin=flipbin(bin);
        
            string s="";
            for(int l = 0 ; l < bin.size(); ++l){
                s+=to_string(bin[l]);
            }
        
            unsigned int N=0;
            int slength= (int)s.length();
            while(slength>0){
                if (s[s.length()-slength]=='1') N+= pow(2,slength-1);
                slength--;
            }
            
            cout<<N<<endl;
    }
    
    return 0;
}
