#https://open.kattis.com/problems/bijele

king, queen, rook, bishop, knight, pawn = map(int,input().split())

one=1-king
two=1-queen
three=2-rook
four=2-bishop
five=2-knight
six=8-pawn

print(one,two,three,four,five,six)
