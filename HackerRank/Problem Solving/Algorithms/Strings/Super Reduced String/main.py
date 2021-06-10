def superReducedString(s):
    s_copy = s
    ans = ""
    i = int()
    while i < len(s) - 1:
        if s[i] == s[i + 1]:
            i += 2
            continue
        else:
            ans += s[i]
            i += 1
    if i == len(s) - 1:
        ans += s[i]
    if ans == "":
        return "Empty String"
    if ans == s_copy:
        return ans
    return superReducedString(ans)


print(superReducedString(input()))
