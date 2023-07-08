# https://atcoder.jp/contests/abc309/tasks/abc309_a


A, B = gets.split.map(&:to_i)
if B != 7 && B != 4 && A != 3 && A != 6 && B - A == 1
  puts "Yes"
else
  puts "No"
end
