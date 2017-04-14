#include <map>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    map<int,int> nlist;
    
    for(int i = 1 ; i<=9 ; ++i){
        nlist.insert(make_pair(i,0));
    }
    
    int row = 3;
    int col = 3;
    
    int matrix[row][col];
    
    for(int i = 0 ; i < row ; ++i){
        for(int j = 0 ; j < col; ++j){
            int num; cin>>num;
            if( num >= 1 && num <=9 )
            {
                matrix[i][j]=num;
                nlist[matrix[i][j]]+=1;
            }else {return -1;}
        }
    }

    int fnum=0;
    for(int i = 1 ; i <= 9 ; ++i ){
        if(nlist[i]==0){
            fnum=i;
        }
    }
    
    int sum = 0 ;
    for(int i = 0 ; i < row ; ++i){
        for(int j = 0 ; j < col ;++j){
            sum = fnum - matrix[i][j];
            if(sum==1){
                break;
            }
        }
            //if(sum==1){break;}
    }
    cout<<sum<<endl;
    return 0;
}
