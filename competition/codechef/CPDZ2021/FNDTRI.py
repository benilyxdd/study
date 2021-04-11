def fact(n):
    if n == 0:
        return 0
    ans = 1
    for i in range(n):
        ans *= i + 1
    return ans

tc = input()
for i in range(tc):
    n, m = (int(x) for x in input().spilt(' '))
    out = n * fact(m - 1) + m * fact(n - 1)
    print(out)
