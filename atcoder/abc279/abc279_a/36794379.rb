# https://atcoder.jp/contests/abc279/tasks/abc279_a


S = gets.chomp
ans = 0
S.each_char do |c|
	if c == 'v'
		ans += 1
	elsif c == 'w'
		ans += 2
	end
end
puts ans
