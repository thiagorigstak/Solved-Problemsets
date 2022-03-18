from itertools import product
import math


def fact(n):
    return math.factorial(n)


def accel_asc(n):
    a = [0 for i in range(n + 1)]
    k = 1
    y = n - 1
    while k != 0:
        x = a[k - 1] + 1
        k -= 1
        while 2 * x <= y:
            a[k] = x
            y -= x
            k += 1
        l = k + 1
        while x <= y:
            a[k] = x
            a[l] = y
            yield a[:k + 2]
            x += 1
            y -= 1
        a[k] = x + y
        y = x + y - 1
        yield a[:k + 1]


def calc_total_rep(partition):
    n = 1
    d = {}
    for i in partition:
        if i not in d.keys():
            d[i] = 1
        else:
            d[i] += 1

    for i in d.keys():
        n *= fact(d[i])
    return n


def main():
    text = input().split()
    n, b = (int(i) for i in text)
    r = n-b

    partitions = {}
    for i in accel_asc(b):
        if len(i) not in partitions.keys():
            partitions[len(i)] = [i]
        else:
            partitions[len(i)] += [i]

    for i in range(r+1):
        try:
            n = 0
            for partition in partitions[i+1]:
                total_rep = calc_total_rep(partition)
                n += fact(r+1)/(fact(r+1-len(partition))*total_rep)
            print(int(n % (1000000000+7)))
        except:
            break
    return


if __name__ == "__main__":
    main()
