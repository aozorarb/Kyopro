# https://atcoder.jp/contests/abc305/tasks/abc305_a


N = gets.to_i
min = 100000
ans = -1
0.step 100, 5 do |i|
  if (i - N).abs < min
    min = (i - N).abs
    ans = i
  end
end
puts ans
