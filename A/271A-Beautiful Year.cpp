#include <bits/stdc++.h>

using namespace std;
/* The idea for this question is to simply split the number given into the
constituent digits, then push these digits into a vector and then loop
over the vector to start inserting values into a set. Since the set in C++
returns a boolean value of whether or not the insertion was successful 
we just check if that value is false. If it is that means some digit was 
not unique so we just break out of the for and try again with an increment.
This goes on till we find our unique digit year */

int main() {
  vector<int> digits_of_year;
  set<int> unique_values;
  int original_unsplit_year,original_year,flag=0;
  cin.sync_with_stdio(false);//For faster I/O
  cin>>original_unsplit_year;
  original_unsplit_year +=1;
  while(true){
    flag = 0;
    digits_of_year.clear();//Clearing the vector
    unique_values.clear();//Clearing the set
    original_year = original_unsplit_year;
    while(original_year>0){//Splitting into digits
      int digit = original_year%10;
      digits_of_year.push_back(digit);
      original_year /= 10;
    }
    reverse(digits_of_year.begin(),digits_of_year.end());//Reversing the vector to get year in order
    for(int i=0;i<digits_of_year.size();i++){//Looping over vector
      if(unique_values.insert(digits_of_year[i]).second == false){//Checking if insertion failed
        flag = 1;
        break;
      }
    }
    if(flag==0){//If it didn't fail we found our unique year
      break;
    }
    original_unsplit_year += 1;
  }
  cout<<original_unsplit_year;
}
