# https://atcoder.jp/contests/abc158/tasks/abc158_b


N, A, B = gets.split.map(&:to_i)
ans =  A * (N / (A+B))
if N % (A+B) > A
  ans += A
else
  ans += N % (A+B)
end
puts ans
