//
//  main.cpp
//  C_MM37
//
//  Created by 田昕巧 on 2024/6/26.
//

//
//  main.cpp
//  C_MM39
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
    int x, y;
    cin >> x >> y;
    if( x == 0 && y == 0){
        cout << "Origin" << endl;
    }else if (x == 0){
        cout <<  "y-axis" << endl;
    }else if (y == 0){
        cout <<  "x-axis" << endl;
    }
    else if (x > 0 && y > 0){
        cout <<  "1st Quadrant" << endl;
    }
    else if (x < 0 && y > 0){
        cout <<  "2nd Quadrant" << endl;
    }
    else if (x < 0 && y < 0){
        cout <<  "3rd Quadrant" << endl;
    }
    else{
        cout << "4th Quadrant" << endl;
    }
    
    
    
    
    
    
}
    



