'''
# Sample code to perform I/O:

name = input()                  # Reading input from STDIN
print('Hi, %s.' % name)         # Writing output to STDOUT

# Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
'''

# Write your code here

prev = dict()

for _ in range(int(input())):
    s = input()
    cnt = 0
    for x in prev.keys():
        if x < s:
            cnt += prev[x]
    if s in prev.keys():
        prev[s] += 1
    else:
        prev[s] = 1
    print(cnt)
