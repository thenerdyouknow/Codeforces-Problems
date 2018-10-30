#include <bits/stdc++.h>

using namespace std;
/* Pretty basic. Sort the vector and print it. */
int main() {
  int number_of_columns,max = 0;
  vector<int> all_column_values;
  cin.sync_with_stdio(false);
  cin>>number_of_columns;
  for(int i=0;i<number_of_columns;i++){
    int individual_column_values;
    cin >> individual_column_values;
    all_column_values.push_back(individual_column_values);
  }
  sort(all_column_values.begin(),all_column_values.end());
  for(int i=0;i<all_column_values.size();i++){
    cout << all_column_values[i]<<" ";
  }
}
