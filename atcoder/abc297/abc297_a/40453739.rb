# https://atcoder.jp/contests/abc297/tasks/abc297_a


N, D = gets.split.map(&:to_i)
Ts = gets.split.map(&:to_i)
click = -1
(N-1).times do |i|
  if Ts[i+1] - Ts[i] <= D
    click = Ts[i+1]
    break
  end
end
puts click
