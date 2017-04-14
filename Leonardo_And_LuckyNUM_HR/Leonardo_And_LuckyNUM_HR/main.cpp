#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        long n;
        cin >> n;
        long x=0,i=0;
        while(n>=7*i){
            if( ((n-7*i)%4)==0 ){
                x=1;
                cout<<"Yes"<<endl;
                break;
            }
            i++;
        }if(x==0){
            cout<<"No"<<endl;
        }
        
    
    }
    return 0;
}

//#include <map>
//#include <set>
//#include <list>
//#include <cmath>
//#include <ctime>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <string>
//#include <bitset>
//#include <cstdio>
//#include <limits>
//#include <vector>
//#include <climits>
//#include <cstring>
//#include <cstdlib>
//#include <fstream>
//#include <numeric>
//#include <sstream>
//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//
//int main(){
//    int q;
//    cin >> q;
//    for(int a0 = 0; a0 < q; a0++){
//        long n;
//        cin >> n;
//        string nah;
//        for(int i = 1 ; i<=n ; ++i){
//            long four= 4*i;
//            long seven= 7*i;
//            long sf= (7*i)+(4);
//            long fs= (4*i)+7;
//            if(n==four || n==seven ||n==sf || fs==n){
//                cout<<"Yes"<<endl; break;
//            }else{nah="No"; }
//        }
//        if(nah=="No"){cout<<nah<<endl;}
//    }
//    return 0;
//}


//#include <map>
//#include <set>
//#include <list>
//#include <cmath>
//#include <ctime>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <string>
//#include <bitset>
//#include <cstdio>
//#include <limits>
//#include <vector>
//#include <climits>
//#include <cstring>
//#include <cstdlib>
//#include <fstream>
//#include <numeric>
//#include <sstream>
//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//
//int main(){
//    int q;
//    cin >> q;
//    for(int a0 = 0; a0 < q; a0++){
//        long n;
//        cin >> n;
//        
//        long four = 4;
//        long seven = 7;
//        long ff=4;
//        long ss=7;
//        int count=0;
//        
//        while(count<n){
//            count++;
//            if(n==four || n ==seven || n==ss ||n==ff){
//                cout<<"Yes"<<endl; break;
//            }else{
//                four+=7;
//                seven+=4;
//                ss+=7;
//                ff+=4;
//            }
//        }
//        if(count==n){cout<<"No"<<endl;}
//    }
//    
//    return 0;
//}


//#include <map>
//#include <set>
//#include <list>
//#include <cmath>
//#include <ctime>
//#include <deque>
//#include <queue>
//#include <stack>
//#include <string>
//#include <bitset>
//#include <cstdio>
//#include <limits>
//#include <vector>
//#include <climits>
//#include <cstring>
//#include <cstdlib>
//#include <fstream>
//#include <numeric>
//#include <sstream>
//#include <iostream>
//#include <algorithm>
//#include <unordered_map>
//
//using namespace std;
//
//
//int main(){
//    int q;
//    cin >> q;
//    for(int a0 = 0; a0 < q; a0++){
//        long n;
//        cin >> n;
//        if( n < 4 || (n>4 && n<7) ){cout<<"No"<<endl;}
//
//        else if( n==4 || n==7){
//            cout<<"Yes"<<endl;
//        }
//        else if( (n!=4 && n!=7)){
//            int count=0;
//            int f=0; int s=0; int fs=0; bool flag=true;
//            while(count<n){
//                if(f==n || s==n || fs==n){cout<<"Yes"<<endl;break;}
//                else if(n<f || n<s || n<fs){cout<<"No"<<endl;break;}
//                f+=4;
//                s+=7;
//                if(flag==true){
//                    fs+=4;
//                }else{fs+=7;}
//                flag=false;
//                count++;
//            }
//        }    }
//    
//    return 0;
//}
//
//
