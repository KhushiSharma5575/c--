// One line that contains  space-separated integers: , , and .
// Constraints
// Output Format
// Print the sum of the three numbers on a single line.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string s;
int n;
int sum, m;
int main() {
    cin >> s >> n; 
    while(n>0)    
    {    
     m=n%10;    
     sum=sum+m;    
     n=n/10;    
    }    
    cout << s << n << endl;
    return 0;
}
