#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    map<int, string> timelist;
   
    int hour, minute;
    cin>>hour;
    cin>>minute;
    
    string half="half past ";
    string underHalf=" minutes past ";
    string aboveHalf=" minutes to ";
    string oclock=" o' clock";
    
    string abovequater="quarter to ";
    string underquater="quarter past ";
    
    
    
    string hr;
    string min;
    string result;
    
    
    for(int i = 1; i <= 29 ; i++){
    switch(i){
        case 1:
            timelist.insert(make_pair(1,"one"));
            break;
        case 2:
            timelist.insert(make_pair(2,"two"));
            break;
        case 3:
            timelist.insert(make_pair(3,"three"));
            break;
        case 4:
            timelist.insert(make_pair(4,"four"));
            break;
        case 5:
            timelist.insert(make_pair(5,"five"));
            break;
        case 6:
            timelist.insert(make_pair(6,"six"));
            break;
        case 7:
            timelist.insert(make_pair(7,"seven"));
            break;
        case 8:
            timelist.insert(make_pair(8,"eight"));
            break;
        case 9:
            timelist.insert(make_pair(9,"nine"));
            break;
        case 10:
            timelist.insert(make_pair(10,"ten"));
            break;
        case 11:
            timelist.insert(make_pair(11,"eleven"));
            break;
        case 12:
            timelist.insert(make_pair(12,"twelve"));
            break;
        case 13:
            timelist.insert(make_pair(13,"thirteen"));
            break;
        case 14:
            timelist.insert(make_pair(14,"fourteen"));
            break;
        case 15:
            timelist.insert(make_pair(15,"fifteen"));
            break;
        case 16:
            timelist.insert(make_pair(16,"sixteen"));
            break;
        case 17:
            timelist.insert(make_pair(17,"seventeen"));
            break;
        case 18:
            timelist.insert(make_pair(18,"eighteen"));
            break;
        case 19:
            timelist.insert(make_pair(19,"nineteen"));
            break;
        case 20:
            timelist.insert(make_pair(20,"twenty"));
            break;
        case 21:
            timelist.insert(make_pair(21,"twenty one"));
            break;
        case 22:
            timelist.insert(make_pair(22,"twenty two"));
            break;
        case 23:
            timelist.insert(make_pair(23,"twenty three"));
            break;
        case 24:
            timelist.insert(make_pair(24,"twenty four"));
            break;
        case 25:
            timelist.insert(make_pair(25,"twenty five"));
            break;
        case 26:
            timelist.insert(make_pair(26,"twenty six"));
            break;
        case 27:
            timelist.insert(make_pair(27,"twenty seven"));
            break;
        case 28:
            timelist.insert(make_pair(28,"twenty eight"));
            break;
        case 29:
            timelist.insert(make_pair(29,"twenty nine"));
            break;
        }
    }
    
    for(int i =0; i < 60; i++ ){
        if(minute==0){
            result += timelist[hour]+oclock;
            break;
        }else if(minute==1){
            result += "one minute past"+timelist[hour];
            break;
        }
        else if( (minute > 1 && minute < 30) && (minute!=15)){ //30분 미만 minutes past hr
            result += timelist[minute]+underHalf+timelist[hour];
            break;
        }else if((minute<60 && minute>30)&& (minute!=45)){ //30분 초과 59 이하 minutes to hr+1
            result += timelist[60-minute]+aboveHalf+timelist[hour+1];
            break;
        }else if(minute==30){ //30분 half past hr
            result += half+timelist[hour];
            break;
        }else if(minute==45){ //45분 quater to hr+1
            result += abovequater + timelist[hour+1];
            break;
        }else if(minute==15){ //15분 quater past hr
            result += underquater + timelist[hour];
            break;
        }
    }
    
    
        int f = (int)result.find('\0');
        if(f!=string::npos){
            result.erase(f);
        }
    
    cout<<result<<endl;
        return 0;
}
