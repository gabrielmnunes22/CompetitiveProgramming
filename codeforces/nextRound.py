n, k = map(int, input().split())
scores = list(map(int, input().split()))

nextRound = 0
for i in range(len(scores)):
    if scores[i] >= scores[k - 1] and scores[i] > 0:
        nextRound += 1

print(nextRound)