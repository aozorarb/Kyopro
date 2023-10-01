# https://atcoder.jp/contests/abc150/tasks/abc150_c

def locate_nth(vec)
  (1..N).to_a.permutation.to_a.index(vec) + 1
end

N = gets.to_i
Ps = gets.split.map(&:to_i)
Qs = gets.split.map(&:to_i)

puts (locate_nth(Ps) - locate_nth(Qs)).abs
