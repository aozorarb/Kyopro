# https://atcoder.jp/contests/abc273/tasks/abc273_b


num, K = gets.split.map(&:to_i)
K.times do |i|
  num = num.round(-(i+1))
end
puts num
