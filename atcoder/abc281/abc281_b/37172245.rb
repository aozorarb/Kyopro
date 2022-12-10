# https://atcoder.jp/contests/abc281/tasks/abc281_b


S = gets.chomp
cond = false
pattern = /^[A-Z][1-9]\d{5}[A-Z]$/
cond = true if S.match? pattern
puts cond ? 'Yes' : 'No'
