# Open Kattis Problem Link: https://open.kattis.com/problems/countthevowels

s = input().lower()
vowels = ['a', 'e', 'i', 'o', 'u']
ct = 0
for i in s:
    if i in vowels:
        ct += 1
print(ct)
