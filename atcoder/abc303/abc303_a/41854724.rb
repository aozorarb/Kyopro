# https://atcoder.jp/contests/abc303/tasks/abc303_a


N = gets.to_i
similar = {'0' => 'o', '1' => 'l'}
S = gets.chomp.gsub(/[01]/, similar)
T = gets.chomp.gsub(/[01]/, similar)

puts (S == T ? 'Yes' : 'No')
