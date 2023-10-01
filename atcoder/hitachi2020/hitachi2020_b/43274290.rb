# https://atcoder.jp/contests/hitachi2020/tasks/hitachi2020_b


A, B, M = gets.split.map(&:to_i)
as = gets.split.map(&:to_i)
bs = gets.split.map(&:to_i)
xs = Array.new(M)
ys = Array.new(M)
cs = Array.new(M)
M.times do |i|
  xs[i], ys[i], cs[i] = gets.split.map(&:to_i)
end
min = as.min + bs.min
M.times do |i|
  total = as[xs[i]-1] + bs[ys[i]-1] - cs[i]
  min = total if min > total
end
puts min
