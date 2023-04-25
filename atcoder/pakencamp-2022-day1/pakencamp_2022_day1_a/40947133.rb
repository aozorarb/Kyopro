# https://atcoder.jp/contests/pakencamp-2022-day1/tasks/pakencamp_2022_day1_a


X, Y = gets.split.map(&:to_i)
if X == 0 && Y == 0
  puts 0
elsif X == 0 || Y == 0
  puts 1
else
  puts 2
end
