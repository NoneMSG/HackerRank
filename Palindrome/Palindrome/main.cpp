#include <iostream>

using namespace std;
class Palindrome{
    
public:
    int find(string s){
        string orginstr =s;
        string temp ;
        string temp2;
        if(s[0] != s[s.size()]){
            
            for(int i = (int)s.size() ; i >= 0; i--){
                temp += s[i];
            }
            
            //cout<<temp2[0]<<endl;
            
            for(int i = 2 ; i < temp.size();i++)
                orginstr += temp[i];
            
            cout<<orginstr<<endl;
        }else{
            return (int)s.size();
        }
        return (int)orginstr.size();
    }
};

int main(int argc, const char * argv[]) {
    
    
    string str = "qwerty";
    Palindrome *pd = new Palindrome();
    //cout<<str.size()<<endl;
    cout<<pd->find(str)<<endl;
    
    
    return 0;
}
