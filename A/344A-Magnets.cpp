#include <bits/stdc++.h>

using namespace std;
/* Another nice one. Logic is pretty simple. If the current 0th 
element of the string is the same as the 1st element of the last
string, then a new group of magnets will form. This happens until the
end is reached.*/
int main() {
  int number_of_magnets,final_count=1;
  string previous_magnet="22";
  cin.sync_with_stdio(false);
  cin>>number_of_magnets;
  for(int i=0;i<number_of_magnets;i++){
    string current_magnet;
    cin>>current_magnet;
    if(current_magnet[0]==previous_magnet[1]){
      final_count +=1;
    }
    previous_magnet = current_magnet;
  }
  cout << final_count;
}
