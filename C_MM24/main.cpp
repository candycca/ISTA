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
    double wage;
    int hr;
    cin >>hr>>wage;
    double total = 0;
    if(hr <= 60){
        total += wage * hr;
    }
    else if (hr > 60 && hr <= 120){
        total += wage * (60 + 1.33*(hr - 60));
    }
    else{
        total += wage * (60 + 1.33*(60) + 1.66*(hr - 120));
    }
    cout << setprecision(1)<< fixed << round(total * 10)/10 << endl;
    
}
    


