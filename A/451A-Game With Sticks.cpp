#include <bits/stdc++.h>

using namespace std;
/* Was surprised that the problem boiled down to a pretty simple logic. 
The basic idea is no matter which intersection is picked two sticks will
be eliminated with each turn. Now, we can keep eliminating sticks till 
only orientation of sticks are left i.e. either n=0 or m=0. Now, the first
value to hit 0 will either be n or m. To find which one will hit 0 first
find min and then if min is even Malvika will end up winning each time
(You can check this by trying out some test cases) and if min is odd 
Akshat will win each time. That's all this question was. */
int main() {
  int value_of_n, value_of_m,min=0;
  cin.sync_with_stdio(false);
  cin>>value_of_n>>value_of_m;
  if(value_of_m>value_of_n){
    min = value_of_n;
  }else{
    min = value_of_m;
  }
  if(min%2==0){
    cout<<"Malvika";
  }else{
    cout<<"Akshat";
  }
}
