/*
 There are contest. 
 first input contest times and how many times can lose.
 each line input luck balance and important rating untill number of contests.
 i.e. input like this 6 3 5 1 2 1 1 1 8 1 10 0 5 0
    output should be 29 ( the maximum amount of luck you can have after all the contests.)
   
 according to i.e. possilbe to lose numbers are 3 and your contest of important are 4
 you can only win 1 time (each lose the contests you lose 1 of luck balance otherwise you gain 1 of luck balance.
 
 in conclusion, you need to find which luck is minimum and how many times can win.
 collect which is important contest, which is minimum luck balance and number of them which is possible to win.
 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class luckRate{
public:
    int luck;
    int rating;
};

int main() {
    
    vector<luckRate> lrList;
    vector<int> impoC;
    
    int numOfCon;
    int possilbeToLose;
    cin>>numOfCon;
    cin>>possilbeToLose;
    
    for(int i = 0 ; i < numOfCon ; ++i){
        luckRate *lr = new luckRate();
        cin>>lr->luck; cin>>lr->rating;
        lrList.push_back(*lr);
        
    }
    
    for(int i = 0 ; i < lrList.size(); ++i){
        if(lrList[i].rating==1){
            impoC.push_back(lrList[i].luck);
        }
    }
    int winTimes = (int)impoC.size() - possilbeToLose; //at least winning
    
    sort(impoC.begin(),impoC.end());
    vector<int> wins;
    for(int i = 0 ; i < winTimes; ++i){
        wins.push_back(impoC[i]);
    }
    
    int mount=0;
    for(int i = 0 ; i < lrList.size(); ++i){
        mount += lrList[i].luck;
    }
    
    
    for(int i = 0 ; i < wins.size();++i){
        mount-=wins[i];
    }
    for(int i = 0 ; i < wins.size();++i){
        mount-=wins[i];
    }
    cout<<mount<<endl;
    return 0;
}

