# https://atcoder.jp/contests/abc092/tasks/abc092_b


N = gets.to_i
D, X = gets.split.map(&:to_i)
As = Array.new(N) { gets.to_i }
ans = X

N.times do |i|
  ans += 1
  ans += (D-1) / As[i]
end
puts ans
