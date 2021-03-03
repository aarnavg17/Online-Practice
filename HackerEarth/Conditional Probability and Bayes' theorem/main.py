'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here

Pct, Pot, N = float(input()), float(input()), int(input())
print("{:.6f}".format((1-Pct)*Pot + Pct*(2/N)))