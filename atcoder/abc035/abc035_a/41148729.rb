# https://atcoder.jp/contests/abc035/tasks/abc035_a


W, H = gets.split.map(&:to_i)
cond = true
if W % 16 == 0 && H % 9 == 0
  cond = false
end
puts cond ? '4:3' : '16:9'
