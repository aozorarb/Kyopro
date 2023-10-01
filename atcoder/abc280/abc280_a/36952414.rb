# https://atcoder.jp/contests/abc280/tasks/abc280_a


H, W = gets.split.map(&:to_i)
Ss = Array.new(H) { gets.chomp }
cnt = 0
H.times do |i|
	W.times do |j|
		cnt += 1 if Ss[i][j] == '#'
	end
end
puts cnt
