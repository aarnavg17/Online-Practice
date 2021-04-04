def is_leap(year):
    return bool(not year % 4 and (year % 100 or not year % 400))


year = int(input())
print(is_leap(year))
