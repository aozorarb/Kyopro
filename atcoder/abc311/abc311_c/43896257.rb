# https://atcoder.jp/contests/abc311/tasks/abc311_c
N = gets.to_i
As = gets.split.map(&:to_i)

fl = Array.new(N, 0)
S = []
v = 0
while fl[v] == 0
  fl[v] = 1
  S << v
  v = As[v] - 1
end

ans = []
S.each do |s|
  v = -1 if s == v
  ans << s + 1 if v == -1
end

puts ans.size
puts ans.join(' ')

