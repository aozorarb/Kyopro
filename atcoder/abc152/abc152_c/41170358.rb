# https://atcoder.jp/contests/abc152/tasks/abc152_c


N = gets.to_i
Ps = gets.split.map(&:to_i)
min = Ps[0]
ans = 0
N.times do |i|
  if min >= Ps[i]
    ans += 1
    min = Ps[i]
  end
end
puts ans
