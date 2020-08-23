#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>
#include "person.h"

using namespace std;
//1 m	3.281 ft	39.37 in    0.000621371192 мили

int rec(int n1)
{
    int re1, n2;
    cout << " n = ? ";
    cin >> n2;
    if(n1 == 1) { return n2; }
    else
    {   return pow(n2,n1);  }
    return rec(n1-1);

}

int main()
{
    srand(time(NULL));
    cout << rec(4);

    return 0;
}



