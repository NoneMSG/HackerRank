#include <cmath>
#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>
using namespace std;

/*
 input 1. array size 2. elements
 its working process is seleted element is last of arry one.
 
 output should be insertion sorted one.
 for instance input 2 4 6 8 3 integers.
 so select last element which is 3
 
 then processing...
 
 2 4 6 8 8
 2 4 6 6 8
 2 4 4 6 8
 2 3 4 6 8
 */
void insertionSort(vector <int>  ar) {
    int selected = ar[ar.size()-1];
    int size =(int)ar.size()-1;
    
    for(int i = size ; i >= 0; --i){
        if( ar[i-1] > selected ){
            ar[i] = ar[i-1];
        }
        else if( (ar[i-1] < selected) ){
            if( ar[i] > ar[i-1] && ar[i] < selected )
            {
                break;
            }
            else
            {
                ar[i] = selected;
            }
        }
        else if( ar[i-1] == selected){
            ar[i] = selected;
        }
        
        for(int i = 0 ; i < ar.size();i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
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

