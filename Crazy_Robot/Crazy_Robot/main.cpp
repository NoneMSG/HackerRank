#include <iostream>
using namespace std;

//로봇이 성공적으로 움직일수 있는 확률을 구하는것.
class Crazy_bot{
    
public:
    double probablities(int move, int south, int north, int east, int west){
    //방향의 총 합은 100이하 move의 허용범위는 1~14 이것의 검증이 필요
        if(move==1){
            return 1.0;
        }
        //if(!(move <=1 && move >=14)||(south+north+east+west)>=100) return -1; //-1은 에러
        
        double _south = (double)south/100.0;
        double _north = (double)north/100.0;
        double _east = (double)east/100.0;
        double _west = (double)west/100.0;
        
        double st=0.0,nt=0.0,wt=0.0,et=0.0;
        
        for(int i = 0 ; i < move ; i++){
            st += (_south*_south);
            nt += (_north*_north);
            et += (_east*_east);
            wt += (_west*_west);
        }
        
        st = st*3;
        nt = nt*3;
        et = et*3;
        wt = wt*3;
        
        return st+nt+et+wt;
    }
};

int main(int argc, const char * argv[]) {
    
    int n = 10;
    int south = 10;
    int north = 30;
    int west = 10;
    int east = 50;
    
    Crazy_bot cb= Crazy_bot();
    
    cout<<(double)cb.probablities(n, south, north, east, west)<<endl;
    
    return 0;
}
