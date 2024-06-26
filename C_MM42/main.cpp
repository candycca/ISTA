//
//  main.cpp
//  C_MM42
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
double func(double n){
    return pow(-1, n+1)*(1/(2*n-1));
}


int main(int argc, const char * argv[]) {
    int num;
    cin >> num;
    double sum = 0;
    for(int i = 1; i <= num; i++){
        sum += func(double(i));
    }
    cout <<setprecision(3) << fixed << round(sum * 1000)/1000 << endl;
    
    
    
    
    
}
    



