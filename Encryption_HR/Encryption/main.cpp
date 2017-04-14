#include <vector>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    
    string str;
    string result;
    
    cin>>str;
    
    double row = floor(sqrt(str.size()));
    double column = ceil(sqrt(str.size()));
    
   // row+=1;
    
    for(double i =0 ; i < column ; i++){
        for(double j = 0 ; j <= row ; j++){
            result += str[(column*j)+i];
            int f = (int)result.find('\0');
            if(f!=string::npos){
                    result.erase(f);
            }
        
        }
        
        result+=" ";

    }
    
    cout<<result<<endl;
    return 0;
}
