# https://atcoder.jp/contests/abc084/tasks/abc084_b


A, B = gets.split.map(&:to_i)
S = gets.chomp
cond = S =~ /\d{#{A}}-\d{#{B}}/
puts cond ? 'Yes' : 'No'
