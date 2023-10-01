# https://atcoder.jp/contests/abc203/tasks/abc203_c


N, K = gets.split.map(&:to_i)
As = Array.new(N)
Bs = Array.new(N)
friend = []
N.times do |i|
  friend.push gets.split.map(&:to_i)
end
friend.sort!
ans = K
N.times do |i|
  if ans >= friend[i][0]
    ans += friend[i][1]
  end
end
puts ans

