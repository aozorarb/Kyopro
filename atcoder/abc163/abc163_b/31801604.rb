N, M = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)
ans = -1
sum = A.reduce(&:+)
ans = N - sum if N >= sum
puts ans

