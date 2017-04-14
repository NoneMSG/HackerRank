#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

//input ex 07:45:00PM
string convt(string time){
    
    string temptime = time;
    
    for(int i = 0 ; i < temptime.length() ; i++){
        if(temptime[i]=='A'||temptime[i]=='a'){
            
            if(temptime[0]== '1' && temptime[1]=='2'){
                temptime[0]='0';
                temptime[1]='0';
            }
            
            return temptime.substr(0,8);
        }else if(temptime[i]=='P' || temptime[i]=='p'){
            char temph1 = temptime[0];
            char temph2 = temptime[1];
            
            if(temph1=='1' && temph2=='2'){
                temptime[0]='1';
                temptime[1]='2';
            }else{
                temph1++, temph2++, temph2++;
                temptime[0]=temph1;
                temptime[1]=temph2;
            }
            return temptime.substr(0,8);
            
        }
    }
    return temptime.substr(0,8);
}

int main(){
    string time;
    cin >> time;
    
    cout<<convt(time)<<endl;
    return 0;
}

