house = input().split()
house_left = int(house[0])
house_right = int(house[1])
tree = input().split()
apple_tree = int(tree[0])
orange_tree = int(tree[1])
number = input().split()
number_of_apples = int(number[0])
number_of_oranges = int(number[1])
apple_distance = list(map(int, input().rstrip().split()))
orange_distance = list(map(int, input().rstrip().split()))

for x in range(len(apple_distance)):
    apple_distance[x] += apple_tree

for x in range(len(orange_distance)):
    orange_distance[x] += orange_tree

apple_count, orange_count = int(), int()

for x in apple_distance:
    if house_left <= x <= house_right:
        apple_count += 1

for x in orange_distance:
    if house_left <= x <= house_right:
        orange_count += 1

print(apple_count, orange_count, sep="\n")

