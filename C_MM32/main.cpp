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
 

// 1741 1 174
int main(int argc, const char * argv[]) {
    int num, n1, n2, n3;
    cin >> num;
    n1 = num / 100;
    n2 = (num / 10 )% 10;
    n3 = num % 10;
    if((n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3) == num){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    
    
    
}
