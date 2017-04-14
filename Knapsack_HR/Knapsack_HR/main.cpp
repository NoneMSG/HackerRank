#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tc ; cin>>tc; // test cases
    
    for(int i = 0 ; i < tc ; ++i){
        
        int n = 0; int k =0;
        cin>>n; // length of the array
        cin>>k; // total value of the array
        
        vector<int> A(n);
        //input integers
        for(int j=0; j<n; ++j){
            int num = 0 ;
            cin>>num;
            A[j]=num;
        }
        
        int flag=0;
        for(int l=0; l < n; ++l){
            int sum=0;
            for(int m=1; m<=100; ++m){
                sum = A[l] * m; // loop : A[1] * 1 = k
                if(sum==k){
                    flag=sum;
                    break;
                }
            }
        }

        if(flag!=0){ //찾았으면 출력
            cout<<flag<<endl;
        }
        
        if(flag==0){ //적합한 조건을 찾지 못한경우
            int c=0;
            int ex=0;
            while(c<n){ // 배열의 길이만큼 반복
                
                ex+=A[c];
                if(ex==k){ //각 배열을 더하는 중 값이 나오는경우
                    cout<<k<<endl;
                    break;
                }
                c++;
            }
            if(ex!=k){ //발견 못하면 0
//                int temp1=0;
//                int stemp =0;
                cout<<0<<endl;
            }
        }
        
    }
    
    return 0;
}




//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    int tc ; cin>>tc;
//    
//    for(int i = 0 ; i < tc ; ++i){
//        
//        int n = 0; int k =0;
//        cin>>n; // length of second line
//        cin>>k; // sum of second line
//        
//        int A[n];
//        
//        for(int j=0; j<n; ++j){
//            int num = 0 ;
//            cin>>num;
//            A[j]=num;
//        }
//        int sum=0;
//        
//        for(int l = 0 ; l < n; ++l)
//        {
//            sum+=A[l];
//        }
//        int result=0;
//        
//        for(int m = 0 ; m < n ; ++m)
//        {
//            if(k==sum){
//                result=sum;
//                break;
//            }else{
//                sum-=A[m];
//            }
//        }
//        if(result!=0){
//            cout<<result<<endl;
//        }else{
//            cout<<0<<endl;
//        }
//        
//    }
//    
//    return 0;
//}



//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//    int tc ; cin>>tc;
//    
//    for(int i = 0 ; i < tc ; ++i){
//        
//        int n = 0; int k =0;
//        cin>>n; // length of second line
//        cin>>k; // sum of second line
//        
//        int A[n];
//        
//        for(int j=0; j<n; ++j){
//            int num = 0 ;
//            cin>>num;
//            A[j]=num;
//        }
//        int result=0;
//        
//        for(int l = 0 ; l < n; ++l)
//        {
//            if( A[l]>1 ){
//                
//                if( k % A[l] ==0){
//                    result = A[l];
//                    break;
//                }else{
//                    result = -1;
//                }
//                
//            }else{
//                result = -1;
//            }
//        }
//        
//        if(result==-1){
//            int sum=0;
//            for(int m = 0 ; m<n;++m){
//                sum+=A[m];
//                if(sum==k){
//                    break;
//                }
//            }
//            if(sum>0){
//                cout<<sum<<endl;}
//            else{cout<<0<<endl;}
//        }else{
//            cout<<k<<endl;
//        }
//    
//        
//    }
//    
//    return 0;
//}
//
