# https://atcoder.jp/contests/abc302/tasks/abc302_a
A, B = gets.split.map(&:to_i)
if A % B == 0
    puts A / B
else
    puts (A/B)+1
end
