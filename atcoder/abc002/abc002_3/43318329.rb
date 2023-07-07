# https://atcoder.jp/contests/abc002/tasks/abc002_3

xa, ya, xb, yb, xc, yc = gets.split.map(&:to_i)
A = Math.sqrt((xb - xc)**2 + (yb - yc)**2)
B = Math.sqrt((xa - xc)**2 + (ya - yc)**2)
C = Math.sqrt((xa - xb)**2 + (ya - yb)**2)
S = (A + B + C) / 2
puts Math.sqrt(S*(S-A)*(S-B)*(S-C))
