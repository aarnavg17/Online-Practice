import time
import math

start = time.time()

nth_prime = 4
i = 9
flag = bool()
while nth_prime < 10001:
    i += 2
    for j in range(3, math.ceil(i ** 0.5) + 1, 2):
        flag = i % j
        if not flag:
            break
    if flag:
        nth_prime += 1
        flag = False
print(i)
print(time.time() - start)
