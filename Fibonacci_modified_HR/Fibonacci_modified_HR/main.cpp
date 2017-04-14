//#include <iostream>
//
//int main(){
//    double a = 0.2 +0.1;
//    std::cout<<a<<std::endl;
//    
//    printf("%.17f\n",a);
//}

#include <cmath>
#include <cstdio>
#include <string.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int64_t> flist;


void fibonacci(int64_t t1, int64_t t2, int64_t n){
    int64_t num =0;
    
    num = t1 + int64_t((pow(t2,2)));
    cout<<num<<endl;
    flist.push_back(num);
    
    if(n!=0)
    fibonacci(t2, num, --n);
    
    //cout<<num<<endl;
    
}

int main() {
    int64_t t1;
    int64_t t2;
    int64_t n;
    
    cin>>t1;
    cin>>t2;
    cin>>n;
    
    flist.push_back(t1);
    flist.push_back(t2);
    
    fibonacci(t1, t2, n);
    
    //sort(flist.begin(), flist.end());
    //cout<<flist[n-1]<<endl;
    //cout<<a<<endl;
    return 0;
}
