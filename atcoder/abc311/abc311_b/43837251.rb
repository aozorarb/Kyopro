# https://atcoder.jp/contests/abc311/tasks/abc311_b


N, D = gets.split.map(&:to_i)
Ss = Array.new(N) { gets.chomp }

def ok?(n)
  N.times do |i|
    return false unless Ss[i][n] == 'o'
  end
  true
end

ans = 0
now = 0
D.times do |i|
  if ok?(i)
    now += 1
  else
    now = 0
  end
  ans = [ans, now].max
end
puts ans


