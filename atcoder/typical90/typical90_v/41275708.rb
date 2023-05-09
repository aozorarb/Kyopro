# https://atcoder.jp/contests/typical90/tasks/typical90_v


A, B, C = gets.split.map(&:to_i)
div = (A.gcd B).gcd C
ans = 0
ans += A / div - 1 unless A / div  <= 1
ans += B / div - 1 unless B / div  <= 1
ans += C / div - 1 unless C / div  <= 1
puts ans
