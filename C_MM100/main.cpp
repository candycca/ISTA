//
//  main.cpp
//  C_MM100
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
    int s, k, m, d;
    
    cin >> s >> k >> m >> d;
    int t = s;
    if ( d < 1 ){
        t += k;
    }
    else if ( d < m){
        t += d * k;
        
    }
    else{
        t += k * m + (d - m)*(k + 5);
    }
    cout << t << endl;
    
    
    
    
    
    
}
    



