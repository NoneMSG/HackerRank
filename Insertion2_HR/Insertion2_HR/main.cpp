#include <cmath>
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
using namespace std;

/*
 Intorduction
 1. input length of string
 2. element til string size
 
 output should be showing each process
 
 example length 6, string 1 4 3 5 6 2
 
 1 4 3 5 6 2
 1 3 4 5 6 2
 1 3 4 5 6 2
 1 3 4 5 6 2
 1 2 3 4 5 6
 */
void PrintStr(vector<int> str){
    for(int i = 0 ; i < str.size();i++)
        cout<<str[i]<<" ";
    cout<<endl;
}
void insertionSort(vector <int>  str) {
    
    for(int i = 0 ; i < str.size()-1; ++i){
        int sel = str[i];
        
        
        if( str[i] > str[i+1] && i+1<str.size()){
            str[i]=str[i+1];
            str[i+1]=sel;
            
            if(str[i] < str[i-1] && str[i] < str[i+1])
            {
                int j = i;
                while(str[j]<str[j-1] && j!=0){
                    int temp = str[j];
                    str[j] = str[j-1];
                    str[j-1]= temp;
                    --j;
                }
            }
            
        }
        PrintStr(str);
    }
    
    
}

int main(void) {
    vector <int>  _ar;
    int _ar_size; //Arry Length
    cin >> _ar_size;
    
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp; // Input Element of Array into the list
        _ar.push_back(_ar_tmp);
    }
    
    insertionSort(_ar);
    
    return 0;
}


