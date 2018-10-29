#include <bits/stdc++.h>

using namespace std;
/* This one was interesting. It was the first problem where I couldn't
see all the contents of the test case that failed so I tried gaming 
the system to find the details during the execution of the test case
but failed to actually find the one flaw which was making it fail.(Finally tried a different approach and found it. I had forgot to 
account for 0s in the input) Then I tried running but still failed,
this is when I realized I had read the question wrong so that was disappointing. Then, I spent 2 hours debugging a simple error. So yeah,
fuck this problem I'm done now. 
Basic problem. Add all elements to set. If set size is same as number of 
levels we have found that It's the guy. Else,your keyboard.*/
int main() {
  int number_of_levels,levels_x_wins,levels_y_wins,count=0;
  cin.sync_with_stdio(false);
  set<int> all_levels_played;
  cin>>number_of_levels>>levels_x_wins;
  for(int i=0;i<levels_x_wins;i++){
    int the_levels;
    cin>>the_levels;
    if(the_levels!=0){
      all_levels_played.insert(the_levels);
    }
  }
  cin>>levels_y_wins;
  for(int i=0;i<levels_y_wins;i++){
    int the_levels;
    cin>>the_levels;
    if(the_levels!=0){
      all_levels_played.insert(the_levels);
    }
  }  
  if(all_levels_played.size()==number_of_levels){
    cout<<"I become the guy.";
  }else{
    cout<<"Oh, my keyboard!";
  }
}
