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
    int total, s, m, h, d;
    cin >> total;
    s = total%60;
    m = total/60 % 60;
    h = total/60/60 % 24;
    d = total/60/60/24;
    
    cout << d << " days" << endl;
    cout << h << " hours" << endl;
    cout << m << " minutes" << endl;
    cout << s << " seconds" << endl;
    
}
    


