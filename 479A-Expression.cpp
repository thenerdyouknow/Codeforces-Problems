#include <bits/stdc++.h>

using namespace std;

int main() {
  int a,b,c,max_sum=0;
  cin.sync_with_stdio(false);//For faster I/O
  cin>>a>>b>>c; 
  if(a==1||b==1||c==1){//Since 1 is a special case when trying to find maximum value. If neither of them are 1 we can just multiply and get maximum value.
    if(a==1 && c==1){//If both A and C are 1 then maximum will be sum of all 3 values.
      max_sum = a+b+c;
    }else if(a==1){//If A is 1 then maximum will be (A+B)*C
      max_sum = (a+b)*c;
    }else if(b==1||c==1){//If B or C is 1 then we check which one between A or C is smaller and find max_sum accordingly. This doesn't make sense the first time around but if c==1 we would find max_sum the same way we find it in the nested else before so instead of having another else if we can just add it as an ||.
      if(a<c){
        max_sum =(a+b)*c;
      }else{
        max_sum =a*(b+c) ;
      }
    }
  }else{
    max_sum = a*b*c;//Just multiply all of them together if neither of them are 1.
  }
  cout << max_sum;
}