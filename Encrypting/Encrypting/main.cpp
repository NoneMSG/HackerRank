#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Coding{
    
    
public:
    long encrypting(vector<long> numbers){
        long vale=0;
        
        for(int i = 0 ; i < numbers.size();i++){
            long temp = 1;
            for(int j = 0 ; j<numbers.size();j++){
                if(i==j){
                    temp*=(numbers[j]+1);
                }else{
                    temp *= numbers[j];
                }
            }
            vale = max(vale,temp);
        }
        return vale;
    }
};


int main(int argc, const char * argv[]) {

    vector<long> nums = {1,2,3};
    char p = '[';
    Coding *cd = new Coding();
    cout<<p<<endl;
    cout<<cd->encrypting(nums)<<endl;
    
    return 0;
}
