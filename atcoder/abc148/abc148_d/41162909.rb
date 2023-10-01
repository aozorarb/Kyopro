# https://atcoder.jp/contests/abc148/tasks/abc148_d


N = gets.to_i
as = gets.split.map(&:to_i)
ans = 0
left = 1
found = false
N.times do |i|
  if as[i] == left
    left += 1
  else
    ans += 1
  end
end

puts left == 1 ? -1 : ans
