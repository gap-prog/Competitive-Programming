# Advent of Code Problem Link: https://adventofcode.com/2022/day/2

with open('input.txt', 'r') as file:
  inpt = file.readlines()
  file.close()
inpt = [i.strip() for i in inpt]
map_input = {
  'A': 'Rock',
  'B': 'Paper',
  'C': 'Scissors',
  'X': 'Rock',
  'Y': 'Paper',
  'Z': 'Scissors',
}
shape_points = {
  'Rock': 1,
  'Paper': 2,
  'Scissors': 3,
}
round_points = {
  'Lose': 0,
  'Draw': 3,
  'Win': 6,
}
total_score = 0
for i in inpt:
  opponent = map_input[i[0]]
  our = map_input[i[2]]
  if opponent == our:
    total_score += round_points['Draw'] + shape_points[our]
  elif (our, opponent) in [('Rock', 'Scissors'), ('Paper', 'Rock'), ('Scissors', 'Paper')]:
    total_score += round_points['Win'] + shape_points[our]
  else:
    total_score += round_points['Lose'] + shape_points[our]
print(total_score)
