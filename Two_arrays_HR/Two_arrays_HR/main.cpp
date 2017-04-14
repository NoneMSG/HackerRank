#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int numc;
    cin>> numc;
    
    for(int i = 0 ; i < numc ; ++i){
        int nums,cnum;
        cin>>nums>>cnum;
        vector<int> arr(nums);
        vector<int> arr2(nums);
        for(int j = 0 ; j < nums ; ++j){
            int n ; cin>>n;
            arr[j]=n;
        }
        for(int j = 0 ; j < nums ; ++j){
            int n ; cin>>n;
            arr2[j]=n;
        }
        sort(arr.begin(),arr.end(), greater<int>() );
        sort(arr2.begin(),arr2.end());
        
        int sum=0;
        //int k = (int)arr2.size()-1;
        for(int j = 0 ; j < nums ; ++j){
//            if( abs(arr[j] - cnum ) != arr2[j] ){
//                sum++;
//            }
            if( (arr[j]+arr2[j]) <cnum)sum++;
        }
        if(sum==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}

