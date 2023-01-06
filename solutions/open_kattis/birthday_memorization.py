# Open Kattis Problem Link: https://open.kattis.com/problems/fodelsedagsmemorisering

k = int(input())
friends = {}
r_friends = []
for _ in range(k):
    d = input().split()
    if d[2] not in friends:
        friends[d[2]] = {}
    friends[d[2]][int(d[1])] = d[0]
for i in friends:
    target = max(friends[i].keys())
    r_friends.append((friends[i][target]))
print(len(r_friends))
for i in sorted(r_friends):
    print(i)
