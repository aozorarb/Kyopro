# https://atcoder.jp/contests/abc127/tasks/abc127_b


r, D, x = gets.split.map(&:to_i)

10.times do |i|
  x = r * x - D
  puts x
end
