//
//  main.cpp
//  c_AR48
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

// 1741 1 174
int main(int argc, const char * argv[]) {
    int num, n1, n2, n3 ,n4;
    cin >> num;
    n1 = func(num / 1000);
    n2 = func((num / 10 / 10) % 10);
    n3 = func((num / 10) % 10);
    n4 = func(num % 10);
    cout << n3 << n4 << n1 << n2 << endl;
    
    
    
    
    
}
    



