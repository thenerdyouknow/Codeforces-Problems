#This was an interesting problem. When I first saw it, I thought I would need to
#use string matching. On searching, I found the KMP algorithm which is supposed
#to be very efficient at doing that. On reading up more, I realized KMP would be
#overkill for something like this as a simple regex would be able to solve the
#problem. Since regex has issues in C++11 I decided to just do the question in
#Python. It took 340ms to operate on a 100 character string which sounds ludicrous
#so I googled on why it was so slow. Apparently, Python, Perl and other popular
#languages implement a slower form of regex matching over the NFA Thompson method.
#You can google and read up on it.(I will leave building a more efficient solution
#to this problem in C++ for another day.)

wubby_string= input()
final_string = wubby_string.replace("WUB"," ")
final_string = final_string.strip()
print(final_string)
