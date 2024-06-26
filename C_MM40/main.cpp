//
//  main.cpp
//  C_MM40
//
//  Created by 田昕巧 on 2024/6/24.
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


int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
        
        if(i == n){
            cout << i << " = " ;
        }
        else{
            cout << i << " + ";}
        
    }
    cout << sum << endl;
    
}
    


