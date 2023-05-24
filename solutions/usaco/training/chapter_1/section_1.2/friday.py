# USACO Training Problem Link: https://train.usaco.org/usacoprob2?a=E2VoASqwGEO&S=friday

with open('friday.in', 'r') as fin:
	N = int(fin.read())
	fin.close()
months = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
days = {i : 0 for i in range(7)}
day = 0
for year in range(1900, 1900 + N):
	for month in months:
		days[day % 7] += 1
		if (month == 28):
			if (year % 400 == 0 or (year % 100 != 0 and year % 4 == 0)):
				day += 29
				continue
		day += month
with open('friday.out', 'w') as fout:
	for i in range(6):
		fout.write(f'{days[i]} ')
	fout.write(f'{days[6]}\n')
	fout.close()
