# https://atcoder.jp/contests/abc299/tasks/abc299_c

N = gets.to_i
S = gets.chomp
if (S.include?('-') && S.include?('o'))
  puts S.split('-').map(&:size).max
else
  puts -1
end
