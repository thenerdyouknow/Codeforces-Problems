#include <bits/stdc++.h> 

using namespace std;
/* Basic Steps of this Program:
1. Take input and push it into a vector. Initialize temp_length = 1 as the minimum greatest increasing subsequence will be one number.
2. Loop through the entire vector and start by checking if the current value is more than previous value, if yes then increment temp_length.
3. If current value is not greater than previous value then check if temp_length>max_length and if it is then update max_length. Also restore value of temp_length.
4. Check once more at the end of the loop if temp_length>max_length and update value of max_length accordingly. This is done so that if the entire sequence is one increasing subsequence we still update max_length as the else doesn't get triggered in that scenario so temp_length stores the length of greatest increasing subsequence */
int main() {
  int amount_of_numbers,max_length=0,temp_length=1;
  vector<int> vector_of_all_numbers;
  std::cin.sync_with_stdio(false);//For faster I/O
  cin >> amount_of_numbers;
  for(int i=0;i<amount_of_numbers;i++){
    int individual_numbers;
    cin >> individual_numbers;
    vector_of_all_numbers.push_back(individual_numbers);
  }
  for(int i=1;i<vector_of_all_numbers.size();i++){
    if(vector_of_all_numbers[i]>=vector_of_all_numbers[i-1]){
      temp_length += 1;
    }
    else{
      if(temp_length>max_length){
        max_length = temp_length;
      }
      temp_length = 1;
    }
  }
  if(temp_length>max_length){
    max_length = temp_length;
  }
  cout << max_length;
}