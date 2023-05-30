import sys


n, k = map(int, input().split())

if k == 1:
    print(n)
    sys.exit(0)

# Calculate 2^(p+1) - 1 using recursive formula
ans = 1
while ans < n:
    ans = ans * 2 + 1

print(ans)