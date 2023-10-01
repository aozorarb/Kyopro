# https://atcoder.jp/contests/abc079/tasks/abc079_b
N = gets.to_i
lucus = Array.new(90, 0)
lucus[0] = 2
lucus[1] = 1
2.upto 90-1 do |i|
  lucus[i] = lucus[i-1] + lucus[i-2]
end
puts lucus[N]
