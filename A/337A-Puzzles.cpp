#include <bits/stdc++.h> 

using namespace std;
/* The basic idea or this program is to take all the inputs, put them in a vector, sort the vector(since that's how we'll find elements with minimum amount on subtraction because the elements around it will closest to it) and then do a check between the first and last elements in every n elements to find the puzzles with minimum amount on subtraction. */
int main() {
  int number_of_kids,number_of_puzzles,least;
  vector<int> all_puzzles;
  cin>>number_of_kids>>number_of_puzzles;
  for(int i=0;i<number_of_puzzles;i++){
    int individual_puzzle;
    cin>>individual_puzzle;
    all_puzzles.push_back(individual_puzzle);
  }  
  sort(all_puzzles.begin(),all_puzzles.end());
  least = all_puzzles[number_of_kids-1]-all_puzzles[0];//number_of_kids -1 since vector is 0 indexed
  for(int i=0;i<(all_puzzles.size()-number_of_kids)+1;i++){//Again, +1 because 0 indexed
    if(all_puzzles[i+(number_of_kids-1)]-all_puzzles[i]<least){
      least = all_puzzles[i+(number_of_kids-1)]-all_puzzles[i];
    }
  }
  cout << least;    
}
