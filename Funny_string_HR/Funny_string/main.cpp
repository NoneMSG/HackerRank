#include <iostream>
#include <algorithm>
#include <cmath>
#include <string.h>

using namespace std;
int main() {
//    cout<<abs('v'-'i')<<endl;
//    cout<<abs('k'-'x')<<endl;
//    cout<<abs('v'-'v')<<endl;
//    cout<<abs('k'-'x')<<endl;
    
    string result;
    string str;
    int numOfcase;
    cin>>numOfcase;
    
    
    for(int i=0; i < numOfcase; i++){
        cin>>str;
        string r;
        int count=0;
        for(int n=(int)str.size()-1; n>=0; n--){
            if(str[n]!='\0')
                r+=str[n];
        }
        cout<<r<<endl;
        int a = abs((str[1] - str[1-1]));
        int b = abs( (r[1] - r[1-1]) );
        cout<<a<<", "<<b<<endl;
        
        int to = ceil(str.size()/2)+1;
        
        for(int j=1; j < to; j++){
                if( abs(str[j]-str[j-1]) == abs(r[j]-r[j-1]) ){
                    count++;
                }else{
                    count=0;
                    break;
                }
        
        }
        if(count==0){
            cout<<"Not Funny"<<endl;
        }else{
            cout<<"Funny"<<endl;
        }
       
    }
    
    return 0;
}
