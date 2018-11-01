#include <bits/stdc++.h> 
using namespace std;
/* There is a lot to be learnt from this problem. First time around I tried using max_element and min_element in <algorithms> but that
just ended in a complicated mess I couldn't even understand myself. Instead all I needed were 2 simple IFs inside the for loop that is
taking input and I was done with finding index of max and min elements. Then it was just simple math to get the final answer, there was
a corner case which had to be taken care of when min element was before the max element as the shuffle would result in one less than 
the total seconds we obtain by adding the time taken for both of them to reach either side(try to check this using the second case given on
the website as it will output 11 instead of 10 if that corner case is not handled). So,
1. Focus on the basics.
2. Don't invoke libraries until you really need it.
*/
int main() {
  int number_of_soldiers,max_element_index=0,min_element_index=0,seconds_taken_min,seconds_taken_max,
  total_seconds_taken,max_element=0,min_element=99999;
  vector<int> all_soldiers;
  cin.sync_with_stdio(false);
  cin>>number_of_soldiers;
  for(int i=0;i<number_of_soldiers;i++){
    int individual_soldiers;
    cin>>individual_soldiers;
    all_soldiers.push_back(individual_soldiers);
    if(individual_soldiers>max_element){
      max_element = individual_soldiers;
      max_element_index = i;
    }
    if(individual_soldiers<=min_element){
      min_element = individual_soldiers;
      min_element_index = i;
    }
  }
  seconds_taken_min = (all_soldiers.size()-1) - min_element_index;
  seconds_taken_max = max_element_index;
  total_seconds_taken = seconds_taken_max+seconds_taken_min;
  if(min_element_index<max_element_index){
    total_seconds_taken -=1;
  }
  cout << total_seconds_taken;
}
