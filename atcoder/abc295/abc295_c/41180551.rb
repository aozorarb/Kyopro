# https://atcoder.jp/contests/abc295/tasks/abc295_c


N = gets.to_i
As = gets.split.map(&:to_i)
buket = Hash.new(0)
ans = 0
As.each do |i|
  buket[i] += 1
  ans += buket[i] / 2
  buket[i] %= 2
end


puts ans
