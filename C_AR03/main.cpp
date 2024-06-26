//
//  main.cpp
//  C_AR03
//
//  Created by 田昕巧 on 2024/6/23.
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
    vector<int> array;
    int sum = 0;
    for(int i = 0; i < 6; i++){
        int num;
        cin >> num;
        array.push_back(num);
    }
    
    for(int i = 0; i < array.size(); i++){
        sum += array[i]*array[i]*array[i];
    }
    cout << sum << endl;
    
    
}

