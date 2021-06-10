import time

start = time.time()
i = int()
check = True
while check:
    i += 2520
    for j in range(19, 10, -1):
        if i % j:
            break
        if j == 11:
            check = False
            print(i)
print(time.time() - start)
