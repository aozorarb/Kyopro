# https://atcoder.jp/contests/abc292/tasks/abc292_b


N, Q = gets.split.map(&:to_i)
player = Array.new(N, 0)
# player[i] が2以上ならban
Q.times do |i|
  op, x = gets.split.map(&:to_i)
  x -= 1
  case op
  when 1
    player[x] += 1
  when 2
    player[x] += 2
  when 3
    puts (player[x] >= 2 ? "Yes" : "No")
  end
end

