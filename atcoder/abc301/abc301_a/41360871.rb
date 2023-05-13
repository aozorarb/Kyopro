# https://atcoder.jp/contests/abc301/tasks/abc301_a


N = gets.to_i
S = gets.chomp
t = S.count('T')
a = S.count('A')
S[N-1] == 'A' ? t += 1 : a += 1 if t == a
puts t > a ? 'T' : 'A'
