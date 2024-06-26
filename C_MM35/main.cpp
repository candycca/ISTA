//
//  main.cpp
//  C_MM35
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



int main(int argc, const char * argv[]) {
    int year;
    cin >> year;
    if (year % 400 == 0){
        cout << "Bissextile Year" << endl;
    }
    else if (year % 100 == 0){
        cout << "Common Year" << endl;
    }
    else if (year % 4 == 0){
        cout << "Bissextile Year" << endl;
    }
    else{
        cout << "Common Year" << endl;
    }
    
    
    
    
    
}
    



