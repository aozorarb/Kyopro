# https://atcoder.jp/contests/abc307/tasks/abc307_a


N = gets.to_i
As = gets.split.map(&:to_i)
N.times do |i|
  print As[i*7...i*7+7].sum
  print ' ' unless i == N - 1
end
puts

