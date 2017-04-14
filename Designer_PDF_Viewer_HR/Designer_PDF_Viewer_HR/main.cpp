#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    map<char,int> str1;
    int input;
    int highest =0;
    
    for(char i = 'a' ; i <= 'z';i++){
        cin>>input;
        str1.insert(make_pair(i, input));
    }
    
    
    
    string str2;
    cin>>str2;
    
    
    for(int i = 0 ; i < str2.size(); i++){
        if(str1[str2[i]] > highest)
        highest = max( str1[str2[i]], highest );
    }
    
    int result ;
    result = highest * 1 * (int)str2.size();
    
    cout<<result<<endl;
    return 0;
}
