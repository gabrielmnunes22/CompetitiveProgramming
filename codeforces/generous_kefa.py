n, k = map(int, input().split())
s = input()

freq = {}

for letter in s:
    if letter in freq.keys():
        freq[letter] += 1
    else:
        freq[letter] = 1

"""
for key, value in freq.items():
    print(f"{key}: {value}")
"""

isGenerous = True

if k != n:
    counter = 0
    for value in freq.values():
        if value > k :
            isGenerous = False

if isGenerous:
    print("YES")
else:
    print("NO")