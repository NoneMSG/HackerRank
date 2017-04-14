#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
void missing_num(vector<int> ar1, vector<int> ar2){
    vector<int> result;
    sort(ar1.begin(),ar1.end());
    sort(ar2.begin(), ar2.end());
  
    vector<int>::iterator iter;
    iter = ar1.begin();
    
    
    for(;iter<ar1.end();++iter){
        if( *iter == *(iter+1) && iter<ar1.end()){
            ar1.erase(iter);
        }
        
    }
    
    for(int i = 0 ; i < ar1.size() ;++i){
        int count=0;
        for(int j = 0 ; j < ar2.size(); ++j){
            if(ar1[i]==ar2[j]){
                count+=1;
            }
        }
        cout<<ar1[i]<<"'s count is "<<count<<endl;
        if((count%2)!=0 && count>1){
            result.push_back(ar1[i]);
        }
        count=0;
    }
    vector<int>::iterator it;
    sort(result.begin(),result.end());
    it = result.begin();
    for(;it!=result.end();++it){
        if( *it == *(it+1)){
            result.erase(it);
        }
    }
    for(;it!=result.end();++it){
        cout<<*it<<" ";
    }cout<<endl;
    
}
int main() {
    int n ;cin>>n; //first array's length
    vector<int> fAr; //first arry
    vector<int> sAr; //second arry
    if(n<=1000010){
    
    for(int i = 0 ; i < n ; i++){
        int num; cin>>num; //input of first arry
        fAr.push_back(num); //save
    }
    int m ; cin>>m; //second array's length
    if(n<=m)
    { // constraint first array is shorter than second one
        for(int i = 0 ; i < m ; i++){
            int num; cin>>num; //input
            sAr.push_back(num);
        }
    }
    else{return 0;}
    
    
    missing_num(fAr,sAr);
    
    }
    return 0;
}



//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//void missing_num(vector<int> farr, vector<int> sarr){
//    vector<int> output;
//    int count=0;
//    map<int,int> mlist1;
//    map<int,int> mlist2;
//    
//    for(int i = 0 ; i < farr.size(); i++){
//        int pivot = farr[i];
//
//        for(int j = 0 ; j < farr.size(); ++j){
//            if(pivot==farr[j]){
//                ++count;
//            }
//        }
//        mlist1.insert(make_pair(pivot, count));
//        count=0;
//    
//    }
//    for(int i = 0 ; i < sarr.size(); i++){
//        int pivot = sarr[i];
//        for(int j = 0 ; j < sarr.size(); ++j){
//            if(pivot==sarr[j]){
//                ++count;
//            }
//        }
//        mlist2.insert(make_pair(pivot, count));
//        count=0;
//    }
//    for(int i = 0 ; i < mlist2.size(); i++){
//        if( !(( mlist1[sarr[i]] + mlist2[sarr[i]] ) %2==0) && !(mlist1[sarr[i]] + mlist2[sarr[i]]==1) ){
//            output.push_back(sarr[i]);
//        }
//    }
////    vector<int>::iterator it; it=output.begin();
////    for(;it!=output.end();++it){
////        for(int i=1; i< output.size()-1;++i){
////            if(output[i]== *it){
////                output.erase(it);
////            }
////        }
////    }
//    
//    for(int i = 0 ; i < output.size();++i){
//        if(output[i]!=output[i+1] )
//        cout<<output[i]<<" ";
//    }cout<<endl;
//}
//
//int main() {
//    int n ;cin>>n;
//    vector<int> farr;
//    vector<int> sarr;
//    map<int, int> result_list;
//    map<int, int>::iterator it;
//    for(int i = 0 ; i < n ; i++){
//        int num; cin>>num;
//        farr.push_back(num);
//    }
//    int m ; cin>>m;
//    if(n<=m){
//        for(int i = 0 ; i < m ; i++){
//            int num; cin>>num;
//            sarr.push_back(num);
//        }
//    }else{return 0;}
//    
//    
//    missing_num(farr,sarr);
//    
//    
//    return 0;
//}
//
