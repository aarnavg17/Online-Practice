strings = []
queries = []
countapp = []
for _ in range(int(input())):
    strings.append(input())
for _ in range (int(input())):
    queries.append(input())
for x in queries:
    if x in strings:
        countapp.append(strings.count(x))
    else:
        countapp.append(0)
for x in countapp:
    print (x)

