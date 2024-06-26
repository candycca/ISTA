
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
    int num;
    cin >> num;
    int n = 35;
    for(int i = 1; n * i <= num; i++){
        if(i == 1){
            cout << n * i;
        }
        else{
            cout << " " << n * i ;
            
        }
    }
    cout << endl;
    
    
}

