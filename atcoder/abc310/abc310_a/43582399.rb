# https://atcoder.jp/contests/abc310/tasks/abc310_a


N, P, Q = gets.split.map(&:to_i)
Ds = gets.split.map(&:to_i)

puts [P, Q + Ds.min].min
