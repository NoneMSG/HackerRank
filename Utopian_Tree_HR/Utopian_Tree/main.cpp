//each spring, it doubles in height.
//each summer, it increase 1 meter height
//tree's defualt height is 1 meter, it starts from 1 meter
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool season=true;
int tree_height=1;

void spring(int cycle){
    
        tree_height*=tree_height;
    
    season=false;
}
void summer(int cycle){
    
        tree_height+=1;
    
    season=true;
}
int main() {
    
        int h=1;
        bool f=true;
        int t;
        cin >> t;
        for(int a0 = 0; a0 < t; a0++){
            int n;
            cin >> n;
            if(n==0){ f=false; cout<<h<<endl; continue;
            }else{
                for(int i = 0 ; i < n ; i++){
                    if(f==false){ //summer
                        h = h+1;
                        
                        f=true;
                    
                    }else if(f==true){ //spring
                        h = h*2;
                        
                        f=false;
                    }
                
                }
            }
            
            cout<<h<<endl;
            h=1;
        }
     
    
    return 0;
}
