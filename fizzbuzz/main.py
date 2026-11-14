MIN = 1;
MAX = 100;

for i in range(MIN, MAX + 1, 1):
    print("%d " % i, end = "")
    if i % 5 == 0:
        print("Fizz", end = "")
    if i % 3 == 0:
        print("Buzz", end = "")
    print()
