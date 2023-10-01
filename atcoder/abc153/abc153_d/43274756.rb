# https://atcoder.jp/contests/abc153/tasks/abc153_d


H = gets.to_i

def solve n
  return 1 if n == 1
  return solve(n/2) * 2 + 1
end
puts solve(H)
