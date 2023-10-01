# https://atcoder.jp/contests/typical90/tasks/typical90_j

N = gets.to_i
Cs = Array.new(N)
Ps = Array.new(N)
N.times do |i|
  Cs[i], Ps[i] = gets.split.map(&:to_i)
end
Q = gets.to_i
sum1 = Array.new(N+1, 0)
sum2 = Array.new(N+1, 0)
1.upto N do |i|
  if Cs[i-1] == 1
    sum1[i] = Ps[i-1] + sum1[i-1]
    sum2[i] = sum2[i-1]
  else
    sum1[i] = sum1[i-1]
    sum2[i] = Ps[i-1] + sum2[i-1]
  end
end

Q.times do |i|
  l, r = gets.split.map(&:to_i)
  puts "#{sum1[r] - sum1[l-1]} #{sum2[r] - sum2[l-1]}"
end

