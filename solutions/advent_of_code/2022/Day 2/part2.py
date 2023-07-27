# Advent of Code Problem Link: https://adventofcode.com/2022/day/2

with open('input.txt', 'r') as file:
  inpt = file.readlines()
  file.close()
inpt = [i.strip() for i in inpt]
map_input = {
  'A': 'Rock',
  'B': 'Paper',
  'C': 'Scissors',
  'X': 'Lose',
  'Y': 'Draw',
  'Z': 'Win',
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
  goal = map_input[i[2]]
  total_score += round_points[goal]
  if (opponent, goal) in [('Rock', 'Draw'), ('Paper', 'Lose'), ('Scissors', 'Win')]:
    total_score += shape_points['Rock']
  elif (opponent, goal) in [('Paper', 'Draw'), ('Scissors', 'Lose'), ('Rock', 'Win')]:
    total_score += shape_points['Paper']
  else:
    total_score += shape_points['Scissors']
print(total_score)
