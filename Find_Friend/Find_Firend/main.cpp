#include <iostream>
#include <vector>
using namespace std;

class FrinedSource{
public:
    int highestScore(vector<string> frineds){
    
        int n = (int)frineds.size();
        int origin = 0;
        
        
        for(int i = 0 ; i< n ; i++){
            int result =0;
            for(int j = 0 ; j < n ; j++){
                if(i==j)continue;
                
                if(frineds[i][j]=='Y'){
                    result++;
                    
                }else{
                    for(int k = 0 ; k < n ; k++){
                        if(frineds[j][k] == 'Y' && frineds[k][i]=='Y'){
                            result++;
                            break;
                        }
                }
                
                }
            }
            origin = max(origin, result);
        }
        
        return origin;
    }
};

int main(int argc, const char * argv[]) {
    
    vector<string> frineds = {"",
                              "",
                              "",
                              ""
                              ""};
    
    FrinedSource *fs = new FrinedSource();
    
    cout<<fs->highestScore(frineds)<<endl;
    return 0;
}
