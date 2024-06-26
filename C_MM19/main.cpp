//
//  main.cpp
//  C_MM19
//
//  Created by 田昕巧 on 2024/6/26.
//

#include <iostream>
#include <map>
#include <queue>
#include <utility>
#include <climits>
#include <functional>
#include <iomanip>
#include <stack>
#include <algorithm>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;
int func(int n){
    return (n+7)%10;
}


int main(int argc, const char * argv[]) {
    int time;
    cin >> time;
    double sum = 0;
    if(time <= 800){
        sum += double(time) * 0.9;
    }
    else if ( time > 800 && time < 1500){
        sum += double(time) * 0.9 * 0.9;
        
    }
    else{
        sum += double(time) * 0.9 * 0.79;
        
    }
    cout << setprecision(1) << fixed << round(sum * 10)/10 << endl;
    
    
    
    
    
}
    



