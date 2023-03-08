# Open Kattis Problem Link: https://open.kattis.com/problems/helpme

board = []
for i in range(8):
    input()
    board += [list(map(lambda i: i[1:-1], input().split('|')[1:-1]))]
input()
board.reverse()
p = {
    'p': [],
    'n': [],
    'b': [],
    'r': [],
    'q': [],
    'k': [],
    'P': [],
    'N': [],
    'B': [],
    'R': [],
    'Q': [],
    'K': [],
}
for i in range(8):
    for j in range(8):
        if board[i][j] in p.keys():
            p[board[i][j]] += [((lambda k: k.upper() if k.lower() != 'p' else '')(board[i][j]), chr(97 + j), i + 1)]
for k, v in p.items():
    if k.isupper():
        v.sort(key=lambda i: (i[2], i[1]))
    else:
        v.sort(key=lambda i: (-i[2], i[1]))
print(f'White: {",".join(list(map(lambda i: (i[0] + i[1] + str(i[2])), (p["K"] + p["Q"] + p["R"] + p["B"] + p["N"] + p["P"]))))}')
print(f'Black: {",".join(list(map(lambda i: (i[0] + i[1] + str(i[2])), (p["k"] + p["q"] + p["r"] + p["b"] + p["n"] + p["p"]))))}')
