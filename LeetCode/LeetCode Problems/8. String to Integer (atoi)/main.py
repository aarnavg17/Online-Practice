def myAtoi(s: str) -> int:
    sign = 1
    start_index = int()
    end_index = len(s)
    for x in range(len(s)):
        if s[x] != ' ':
            start_index = x
            if s[x] == '+':
                sign = 1
                start_index += 1
            elif s[x] == '-':
                sign = -1
                start_index += 1
            break

    new_s = s[start_index:]
    for x in range(len(new_s)):
        if new_s[x] < '0' or new_s[x] > '9':
            end_index = x
            break

    new_new_s = s[start_index: start_index + end_index]
    try:
        ans = int(new_new_s)
    except:
        return 0
    ans *= sign
    if ans < -2147483648:
        return -2147483648
    if ans > 2147483647:
        return 2147483647
    return ans


print(myAtoi("-5-"))
