
/*
 x is starting point.
 v is how many number increase per one time.
 */
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    int i = 0;
    while(i!=10000){
        x1+=v1;
        x2+=v2;
        if(x1==x2){
            cout<<"YES"<<endl;
            exit(0);
            break;
        }
        i++;
    }
    cout<<"NO"<<endl;
    return 0;
}

