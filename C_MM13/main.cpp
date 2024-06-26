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
    int sh, sm, eh, em;
    cin >> sh >> sm >> eh >> em;
    int total_h, total_m;
    if (em >= sm){
        total_h = eh - sh;
        total_m = em - sm;
    }
        
    else{
        em += 60;
        eh -= 1;
        total_h = eh - sh;
        total_m = em - sm;
        
    }
    
    int sum = 0;
    int total = 60 * total_h + total_m;
    for(int i = 0; i < 48 && 30 * i <= total ; i++){
        if(i > 0 && i <= 4){
            sum += 30;
  
        }
        else if (i > 4 && i <= 8){
            sum += 40;
         
        }
        else if(i > 8){
            sum += 60;
    
        }
    }
    cout << sum << endl;
    
    
}
    


