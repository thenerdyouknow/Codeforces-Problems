#include <bits/stdc++.h>

using namespace std;
/* This one is a little tricky since the fact that vectors are 0 indexed really messes up
with the calculation. We take all the friends and put them in a vector and then initialize
another vector of the same length with all 0s. 
For 2 3 4 1 we need the first element to be 4 so we see that we can subtract 1 from the element itself(since vectors are 0 indexed) to get the location of where the 
element needs to go. So for example, 2 needs to go location 1. 2 is in location 0 though
so we just add one to the current location to get new location. As for the value, we need
the value to be 1 so we just add 1 to i to get that value. Similarly 3 needs to go to location
2 and have value 2(i+1).
This way we get 4 1 2 3 */

int main() {
  int number_of_friends;
  vector<int> all_friends;
  cin.sync_with_stdio(false);//For faster I/O
  cin >> number_of_friends;
  for(int i=0;i<number_of_friends;i++){
    int individual_friend;
    cin>>individual_friend;
    all_friends.push_back(individual_friend);//Push into vector
  }
  vector<int> final_friendlist(number_of_friends,0);//initialize new vector will size number_of_friends and size 0
  for(int i=0;i<number_of_friends;i++){

    final_friendlist[all_friends[i]-1] = i+1;//See explanation above
  }
  for(int i=0;i<final_friendlist.size();i++){//Print
    cout<<final_friendlist[i]<<" ";
  }
}