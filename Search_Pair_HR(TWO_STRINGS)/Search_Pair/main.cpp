/*
 find pair from string1 and string2 (two strings)
 input ex : 2 \n hello \n world \n hi \n world
 */
#include <queue>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int size;

vector<string> result;

void Search_pair(queue<string> _strQ){
    int count=0;
    //cout<<"first count value "<<count<<endl;
 
    
    string str1 = _strQ.front(); _strQ.pop();
    string str2 = _strQ.front(); _strQ.pop();
    
    
    if(str1[0]==str2[0]){count++;}
    
    for(int i = 0 ; i < str1.size()-1; i++){
        for(int j = 1 ; j < str2.size()-1; j++){
            if(str1[i]==str2[j]){
                count++;
            }
        }
    }
    
    //cout<<"count vlaue "<<count<<endl;
    if(count>=2){result.push_back("YES");}else{result.push_back("NO");}
    
    //만약 자료구조에 데이터가 있다면 다시 빼야 한다 !
    if(!(_strQ.empty())){Search_pair(_strQ);}
    
    
}

int main() {
    //자료구조를 큐로 만들면 될듯
    string str1, str2;
    vector<string> strList;
    queue<string> strQ;
    
    cin>>size;
    
    for(int i = size ; i > 0 ; i--){
        cin>>str1;
        cin>>str2;
        strQ.push(str1);
        strQ.push(str2);
//        strList.push_back(str1);
//        strList.push_back(str2);
        
    
    }
    Search_pair(strQ);

    
    for(int i = 0 ; i < result.size(); i++){
        cout<<result[i]<<endl;
    }
    return 0;
}



//    if(str1[0]==str2[0]) count++;
//
//    for(int i = 0 ; i < str1.size(); i++){
//        for(int j = 1 ; j < str2.size(); j++){
//
//            if(str1[i]==str2[j]||str1[i]==str1[j]){
//                count++;
//                tempstr+=str1[i];
//            }
//
//        }
//    }
//    cout<<count<<endl;
//    cout<<tempstr<<endl;
//    if(count>=2){return "YES";}else{return "NO";}
