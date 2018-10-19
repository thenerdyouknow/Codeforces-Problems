#include<iostream>
#include<vector> 

int main() {
  int number_of_groups = 0,number_of_fours =0,number_of_threes =0,number_of_twos=0,number_of_ones = 0;
  int total_number_of_cabs=0;
  std::cin.sync_with_stdio(false);//For faster I/O
  std::cin >> number_of_groups; 
  for(int i =0;i<number_of_groups;i++)//Looping through the input and calculating number of times 1,2,3,4 appears in the input
  {
    int individual_groups;
    std::cin>>individual_groups;
    if(individual_groups==4){
      number_of_fours += 1;
    }else if(individual_groups==3){
      number_of_threes += 1;
    }else if(individual_groups==2){
      number_of_twos += 1;
    }else if(individual_groups==1){
      number_of_ones += 1;
    }
  }
  total_number_of_cabs = number_of_fours; //Since 1 cab can have 4 people all groups with 4 people in them will get one cab
  if(number_of_threes - number_of_ones >=0){//If there are more groups of 3 than groups of 1
    total_number_of_cabs += number_of_ones;//Add number of 1s
    number_of_threes -= number_of_ones;//Subtract number of 1s since all the 1s were grouped with 3s
    number_of_ones = 0;
    total_number_of_cabs += number_of_threes;//Since 3s can't be grouped with any other group just add more taxis for each other group of 3.
  }else{
    total_number_of_cabs += number_of_threes;//Just add the number of 3s to total number of cabs 
    number_of_ones -= number_of_threes;//Update number of 1s since the rest of the groups of 1 have been allotted taxis with groups of 3s.
  }
  if(number_of_ones>0){//Checking if there are any groups of 1s left before performing operations on them
    int number_of_ones_to_add = number_of_ones/2; //Find how many groups of twos can be formed from groups of 1s
    number_of_twos += number_of_ones_to_add;//Add them to the groups of 2s
    number_of_ones -= number_of_ones_to_add*2;//Subtract those groups from original groups of 1s.
  }
  total_number_of_cabs += number_of_twos/2;//Grouping 2 groups of 2 together to form one cab 
  number_of_twos = number_of_twos % 2;//Updating value of groups of 2s after allocation
  if(number_of_twos>0 || number_of_ones>0){//At worst case, only one two and one 1 will remain at this point so put them in the last cab.
    total_number_of_cabs += 1;
  }
  std::cout <<total_number_of_cabs;
}