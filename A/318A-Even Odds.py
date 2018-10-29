#This one was a little interesting. Given input size we were clearly not supposed to construct an array and lookup the location as it would definitely take too long.
#I was also doing the program in Python(due to its inherent ability to handle really big numbers automatically) so the program was bound to be even slower.
#So, the idea is that you can basically construct the number with the details we are given.
#We are given the upper limit of the odd and even numbers and the location of the number we need to find. 
#First, we check if upper_limit is even or odd and determine the number of odd and even numbers respectively.
#Secondly, we check if the location of the number to find is smaller or bigger than the number of odd numbers that should exist in the array(if we constructed one) 
#and if it doesn't we can just subtract one from the location and multiply by 2. We then add 1 to get our value.
#Otherwise we just subtract number of odd numbers from the location of the number to find. We then multiply this by 2 and give the final number.

original_string_input = input()
splitting_original_string = original_string_input.split(" ")
upper_limit = int(splitting_original_string[0])
location_of_number_to_find = int(splitting_original_string[1])
if(upper_limit%2==0):
  number_of_odd_numbers = number_of_even_numbers = int(upper_limit/2)
else:
  number_of_even_numbers = int(upper_limit/2)
  number_of_odd_numbers = number_of_even_numbers+1
if(location_of_number_to_find<=number_of_odd_numbers):
  multiplier_needed = location_of_number_to_find-1
  final_number = (2*multiplier_needed)+1
else:
  multiplier_needed = Location_of_number_to_find-number_of_odd_numbers
  final_number = 2*multiplier_needed
print(final_number)

