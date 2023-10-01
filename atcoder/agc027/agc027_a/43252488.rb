# https://atcoder.jp/contests/agc027/tasks/agc027_a


N, x = gets.split.map(&:to_i)
as = gets.split.map(&:to_i).sort
ans = 0
total = 0
cnt = 0
N.times do |i|
  if total + as[i] <= x
    ans += 1
    total += as[i]
  else
    break
  end
  cnt = i
end

if cnt == N-1 && total != x
  puts ans - 1
else
  puts ans
end
