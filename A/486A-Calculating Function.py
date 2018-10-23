#Used Python for this one as its better at handling really big numbers
#Made no sense to create time making a wrapper to use C++
#Used formula of (n*n+1) and (n+1/2)^2 to find the odd and even sums to n.
value_of_n = int(input())
if(int(value_of_n)%2==0):
  even_sum = int(value_of_n/2)*(int(value_of_n/2)+1)
  odd_sum = pow(int((value_of_n+1)/2),2)
else:
  even_sum = int(value_of_n/2)*(int(value_of_n/2)+1)
  odd_sum = pow(int((value_of_n+1)/2),2)

total_sum = even_sum - odd_sum
print(int(total_sum))
