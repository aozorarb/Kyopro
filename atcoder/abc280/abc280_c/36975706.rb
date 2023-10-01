# https://atcoder.jp/contests/abc280/tasks/abc280_c


S = gets.chomp
T = gets.chomp
idx = S.size + 1
(S.size).times do |i|
	if S[i] != T[i]
		idx = i + 1
		break
	end
end
puts idx
