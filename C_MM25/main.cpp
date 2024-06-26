//
//  main.cpp
//  C_MM27
//
//  Created by 田昕巧 on 2024/6/27.
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

using namespace std;


int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            sum+=i;
        }
        
    }
    cout << sum << endl;
    
    
}

