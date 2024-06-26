
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
    int num, ten, five, one;
    cin >> num;
    ten = num / 10;
    five = (num % 10) / 5;
    one = (num % 10) % 5;
    cout << "NT10=" << ten << endl;
    cout << "NT5=" << five << endl;
    cout << "NT1=" << one << endl;
}
    


