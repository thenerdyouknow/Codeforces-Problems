#include <bits/stdc++.h>

using namespace std;
/* Simple problem. Sort the string. For even number of games check if
the (n/2)+1 element is A or D. If A, print Anton. If D check n/2. If n/2 = D then print Danik or Friendship if n/2 is A. If odd check (n/2)+1 and
if A then print Anton or else Danik */
int main() {
  int number_of_games;
  string results_of_games;
  cin.sync_with_stdio(false);
  cin >> number_of_games;
  cin >> results_of_games;
  sort(results_of_games.begin(),results_of_games.end());
  int half_the_games = number_of_games/2;
  if(number_of_games%2==0){
    if(results_of_games[half_the_games]=='A'){
      cout << "Anton";
    }else if(results_of_games[half_the_games]=='D'){
      if(results_of_games[half_the_games-1]=='D'){
        cout << "Danik";
      }else{
        cout << "Friendship";
      }
    }
  }else{
    if(results_of_games[half_the_games]=='D'){
      cout<<"Danik";
    }else{
      cout << "Anton";
    }
  }
}