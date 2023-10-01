# https://atcoder.jp/contests/abc306/tasks/abc306_b


As = gets.split.map(&:to_i)
mul = 1
sum = 0
As.each do |i|
  sum += i * mul
  mul <<= 1
end
puts sum
