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
    long int fact = 1;
    if ( n > 0 && n < 20){
        for(int i = 1; i <= n; i++){
            fact *= i;
        }
        cout << fact << endl;
    }
    
}
    


