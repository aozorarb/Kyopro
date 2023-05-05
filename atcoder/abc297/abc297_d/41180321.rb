# https://atcoder.jp/contests/abc297/tasks/abc297_d

a, b = gets.split.map(&:to_i)
cnt = -1
until a == b
  a, b = b, a if b > a
  cnt += (a / b)
  a %= b
  break if a == 0
end

puts a == b ? 0 : cnt
