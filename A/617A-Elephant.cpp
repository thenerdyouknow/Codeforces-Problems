#include <bits/stdc++.h>
/* I will leave the logic of this one as an exercise to the reader
(Always wanted to say that) */
using namespace std;

int main() {
  int x_coordinates,steps_taken=0;
  cin.sync_with_stdio(false);//For faster I/O
  cin>>x_coordinates;
  while(x_coordinates>=5){
    x_coordinates -= 5;
    steps_taken += 1;
  }
  if(x_coordinates<5 && x_coordinates>0){
    steps_taken += 1;
  }
  cout << steps_taken;
}
