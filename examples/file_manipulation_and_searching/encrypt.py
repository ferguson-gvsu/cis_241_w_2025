import sys

for i in range(26):
  print(chr(ord('a') + i), end = '')
print('')

rot_amount = int(sys.argv[1])

for i in range(26):
  offset = (i + rot_amount) % 26 
  print(chr(ord('a') + offset), end = '')
print('')
