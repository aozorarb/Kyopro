a, b, c = map(int, input().split())

if a < b :
	if b < c : print('B')
	elif a < c : print('C')
	else : print('A')
else :
	if a < c : print('A')
	elif b < c : print('C')
	else : print('B')


