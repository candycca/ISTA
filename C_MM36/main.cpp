//
//  main.cpp
//  C_MM36
//
//  Created by 田昕巧 on 2024/6/25.
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
    int m = 0;//預設鈍角
    
    cin >> m;
    if(3 <= m && m <=5){
        cout << "Spring" << endl;
    }
    else if(6 <= m && m <=8){
        cout << "Summer" << endl;
    }else if(9 <= m && m <=11){
        cout << "Autumn" << endl;
    }else{
        cout << "Winter" << endl;
        
    }
}
    



