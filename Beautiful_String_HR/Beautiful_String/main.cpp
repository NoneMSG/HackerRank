#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>

using namespace std;


/*
 길이를 아니까 길이에 따라서 3개씩 substring을 해서 010을 찾고 없다면 만들어 낸다.
 */
int main() {
    
    int n ;
    string str;
    cin>>n; //Length of str
    cin>>str; //string
    int ncount=0;
    int count=0;
    if(str.length()!=n){
        exit(0);
    }

    for(int i = 0 ; i < str.size();i++){
            string temp = str.substr(i,3);
        if( temp=="010"){
            count++;
        }else {
            ncount++;
        }
    }
    
    if(count==0 && ncount>0){
            cout<<0<<endl;
    }else if(count>0 && ncount>0){
        cout<<abs(count-ncount)+1<<endl;
    }
    
    return 0;
}

//
//
//int main() {
//    
//    int n ;
//    string str;
//    cin>>n; //Length of str
//    cin>>str; //string
//    int count=0;
//    if(str.length()!=n){
//        exit(0);
//    }
//    
//    for(int i = 0 ; i < str.size();i+=2){
//        string temp = str.substr(i,3);
//        if( temp=="010"){
//            count++;
//        }else{
//            count--;
//        }
//    }
//    if(count>=0){
//        cout<<count<<endl;
//    }else{
//        cout<<0<<endl;
//    }
//    
//    
//    
//    
//    return 0;
//}
//
