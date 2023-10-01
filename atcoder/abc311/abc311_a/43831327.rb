# https://atcoder.jp/contests/abc311/tasks/abc311_a


N = gets.to_i
S = gets.chomp
M = {}
N.times do |i|
  M[S[i]] = true
  if M['A'] && M['B'] && M['C']
    puts i+1
    break
  end
end
