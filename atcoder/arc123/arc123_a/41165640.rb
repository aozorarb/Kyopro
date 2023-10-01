# https://atcoder.jp/contests/arc123/tasks/arc123_a
# #answer
a, b, c = gets.split.map(&:to_i)
x = 2 * b - a - c
k = (x >= 0 ? 0 : (1 - x) / 2)
puts x + 3 * k
