#include <bits/stdc++.h>

using namespace std;
/* Solving the logic for this problem is left as a exercise to the reader */
int main() {
  string first_string,second_string;
  vector<int> final_vector;
  cin.sync_with_stdio(false);//For faster I/O
  cin>>first_string;
  cin>>second_string;
  for(int i=0;i<first_string.length();i++){
    if(first_string[i]!=second_string[i]){
      final_vector.push_back(1);
    }
    else{
      final_vector.push_back(0);
    }
  }
  for(int i=0;i<final_vector.size();i++){
    cout<<final_vector[i];
  }
}