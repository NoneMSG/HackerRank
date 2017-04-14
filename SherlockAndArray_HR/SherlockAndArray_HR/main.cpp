#include <assert.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int noc; //number of test case
    cin>>noc;
    assert(noc <= 10);
    
    for(int i = 0 ; i < noc ; ++i){
        vector<int> a;
        int t=0; cin>>t;
        for(int j=0; j < t ; ++j){
            int num=0; cin>>num;
            a.push_back(num);
            
        }
        if(a.size()==1){cout<<"YES"<<endl; continue;}
        
        bool flag = true;
        int lsum=0;
        int rsum=0;
        
        for(int k = 0 ; k < a.size(); ++k)
        {
            
            if( k==0 )
            {
                lsum+=0;
            }
            else
            {
                lsum += a[k-1];
                
            }
            for(int l = a.size(); l>k ; --l){
                rsum+=a[l];
            }
            if(rsum==lsum){flag=true;  break;}else{flag=false; rsum=0; continue;}
            
            
        }
        if(flag==true){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
    }
        
    
    return 0;
}

//#include <assert.h>
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    
//    int noc; //number of test case
//    cin>>noc;
//    assert(noc <= 10);
//    
//    for(int i = 0 ; i < noc ; ++i){
//        vector<int> a;
//        int t=0; cin>>t;
//        for(int j=0; j < t ; ++j){
//            int num=0; cin>>num;
//            a.push_back(num);
//            
//        }
//        if(a.size()<=1){cout<<"YES"<<endl; continue;}
//        
//        bool flag = true;
//        
//        
//        int sum=0;
//        for(int s=0; s<a.size(); ++s){
//            sum+=a[s];
//        }
//        
//        int lsum=0;
//        int rsum=sum;
//        
//        for(int k=0; k< a.size(); ++k){
//            lsum = sum-rsum;
//            rsum = rsum-a[k];
//            if(lsum==rsum)
//            {
//                flag=true;
//                break;
//            }
//            else
//            {
//                flag=false;
//                continue;
//            }
//        }
//        if(flag==true){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}
//    }
//    
//    
//    return 0;
//}
