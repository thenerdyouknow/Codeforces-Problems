#include <bits/stdc++.h>

using namespace std;
/* Solving the logic for this problem is left as a exercise to the reader */
int main() {
  string original_mixedcase_string;
  int length_of_string,uppercase_count = 0;
  cin.sync_with_stdio(false);//For faster I/O
  cin >> original_mixedcase_string;
  length_of_string = original_mixedcase_string.length();
  for(int i=0;i<length_of_string;i++){
    if(isupper(original_mixedcase_string[i])){
      uppercase_count +=1;
    }
  }
  if(uppercase_count>length_of_string/2){
    for(int i=0;i<length_of_string;i++){
      original_mixedcase_string[i] = toupper(original_mixedcase_string[i]);
    }
  }else{
    for(int i=0;i<length_of_string;i++){
      original_mixedcase_string[i] = tolower(original_mixedcase_string[i]);
    }
  }
  cout << original_mixedcase_string;
}
