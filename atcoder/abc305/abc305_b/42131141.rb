# https://atcoder.jp/contests/abc305/tasks/abc305_b


p, q = gets.chomp.split
sum = {'A' => 0, 'B' => 3, 'C' => 4, 'D' => 8, 'E' => 9, 'F' => 14, 'G' => 23}

puts (sum[p] - sum[q]).abs
