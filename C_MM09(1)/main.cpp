//
//  main.cpp
//  C_MM09(1)
//
//  Created by 田昕巧 on 2024/6/23.
//


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i,result;
    cin >> i;
    if(i>31)
        cout << "Value of more than 31" << endl;
    else
    {
        //使用cmath中的pow函數
        result=pow(2,i);
        cout << result << endl;
    }


}


