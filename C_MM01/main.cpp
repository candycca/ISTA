//
//  main.cpp
//  C_MM01
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
#include <cmath>

using namespace std;


int main(int argc, const char * argv[]) {
    int lower, upper, h;
    cin >> lower >> upper >> h;
    double area = ((lower + upper)*h)/2.0;

    cout << fixed<< setprecision(1)<< "Trapezoid area:"  << area << endl;
    
    
}

