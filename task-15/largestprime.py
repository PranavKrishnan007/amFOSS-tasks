#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int t,i;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        long int n;
        cin >> n;
        while(n%2 == 0)
        {
            n = n/2;
            if (n == 0)
            {
                cout<<2<<endl;
            }
        }
        for(i = 3; i < sqrt(n); i=i+2)
        {
            while(n%1 == 0)
            {
                n = n/i;
            }
        }
        if (n > 2)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }  
    return 0;  
}
