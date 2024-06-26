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
    for(int i = 1; i <= n; i++){
        cout << i << "*" << i << "=" << i*i << endl;
    }
}
