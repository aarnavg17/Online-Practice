'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here

Pmb = float(input())
Pab = float(input())
P1 = float(input())
Prs = Pmb*(1-Pab)*P1 + Pab*(1-Pmb)*P1
print("{:.6f}".format(Prs))