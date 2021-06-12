for _ in range(int(input())):
    s = input()
    n = int(s)
    cnt = int()
    for ch in s:
        if ch == '0':
            continue
        if n % int(ch) == 0:
            cnt += 1
    print(cnt)
