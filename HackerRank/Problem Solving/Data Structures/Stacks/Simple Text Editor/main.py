stack = []
s = ""
for _ in range(int(input())):
    t = input().split()
    if t[0] == '1':
        stack.append(s)
        s += t[1]
    elif t[0] == '2':
        stack.append(s)
        s = s[: len(s) - int(t[1])]
    elif t[0] == '3':
        print(s[int(t[1]) - 1])
    else:
        s = stack.pop()
