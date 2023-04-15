# https://atcoder.jp/contests/abc298/tasks/abc298_a


N = gets.to_i
S = gets.chomp
cond = (S.count('o') > 0) && (S.count('x') == 0)

puts cond ? 'Yes' : 'No'
