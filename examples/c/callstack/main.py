import sys

def recurse(n):
  print(n)
  recurse(n+1)

sys.setrecursionlimit(1 << 15)
recurse(0)
