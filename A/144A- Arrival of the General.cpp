#include <bits/stdc++.h> 
using namespace std;

int main() {
  int number_of_soldiers,max_element_index=0,min_element_index=0,seconds_taken_min,seconds_taken_max,total_seconds_taken,max_element=0,min_element=99999;
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