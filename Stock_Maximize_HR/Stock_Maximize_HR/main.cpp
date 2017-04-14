#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tcase;
    cin>>tcase;
    if(tcase > 10 || tcase < 1){exit(0);}
    
    int sprice=0;
    for(int i = 0 ; i < tcase ; ++i){
        
        int days;
        cin>>days;
        vector<int> prices;
        
        for(int j = 0 ; j < days ; ++j){
            int num;
            cin>>num;
            prices.push_back(num);
        }
        int maxPrice = 0;
        int profit = 0;
        
        for(int k  = (int)prices.size()-1 ; k >= 0 ;--k){
            
            if(prices[k] >= maxPrice){
                maxPrice = prices[k];
            }
            profit += maxPrice - prices[k];
        }
        //        cout<<maxPrice<<endl;
        cout<<profit<<endl;
        // code here ...
        
    }
    
    return 0;
}



//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//
//int main() {
//    int tcase;
//    cin>>tcase;
//    if(tcase > 10 || tcase < 1){exit(0);}
//    
//    for(int i = 0 ; i < tcase ; ++i){
//    
//        int days;
//        cin>>days;
//        vector<int> prices;
//        
//        for(int j = 0 ; j < days ; ++j){
//            int num;
//            cin>>num;
//            prices.push_back(num);
//        }
//        
//        int pf = *max_element(prices.begin(),prices.end());
//    }
//    
//    return 0;
//}
//
