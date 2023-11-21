cin = open("input.txt", "r")
cout = open("output.txt", "w")


def popcount(x):
    return bin(x).count("1")


def main():
    n = int(input())

    t = False
    for i in range(n - 36, n):
        if popcount(i) + i == n:
            print(i)
            t = True
            break

    if t == False:
        print(-1)


main()
