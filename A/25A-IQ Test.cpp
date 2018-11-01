#include <bits/stdc++.h>

using namespace std;
/* Again, pretty basic. At this point I'm doing these problems just to 
get proficient with C++ syntax. Check if number is even and add to even count, if not even add to odd count and once either even or odd count is 
more than 2 stop incrementing altogether as we have found which evenness 
we need to look for.(Saves time) Then just check which count is 1 and 
print accordingly */
int main() {
  int amount_of_numbers,even_count=0,even_index_to_be_printed=0,odd_count=0,odd_index_to_be_printed = 0;
  cin.sync_with_stdio(false);
  cin >> amount_of_numbers;
  for(int i=0;i<amount_of_numbers;i++){
    int individual_numbers;
    cin>>individual_numbers;
    if(individual_numbers%2==0 && even_count<=2){
      even_count += 1;
      even_index_to_be_printed = i+1;
    }else if(individual_numbers%2==1 && odd_count<=2){
      odd_count += 1;
      odd_index_to_be_printed = i+1;
    }
  }
  if(even_count==1){
    cout << even_index_to_be_printed;
  }else{
    cout << odd_index_to_be_printed;
  }
}