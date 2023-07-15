# https://atcoder.jp/contests/abc310/tasks/abc310_c
require 'set'
N = gets.to_i
ro = Set.new
ans = 0
N.times do |i|
  s = gets.chomp
  if s > s.reverse
    ans += 1 if ro.add?(s)
  else
    ans += 1 if ro.add?(s.reverse)
  end
end
puts ans
