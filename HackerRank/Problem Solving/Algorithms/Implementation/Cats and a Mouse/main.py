for _ in range(int(input())):
    catA, catB, mouse = map(int, input().split())
    x = abs(catA - mouse)
    y = abs(catB - mouse)
    if x < y:
        print("Cat A")
    elif x > y:
        print("Cat B")
    else:
        print("Mouse C")
