# https://atcoder.jp/contests/abc283/tasks/abc283_c
S = gets.chomp.split('')
ans = 0
#p S
until S.empty?
	if S.first == '0'
		S.shift
		if S.first == '0' || S.empty?
			ans += 1
			S.shift
		else
			ans += 2
			S.shift
		end
	else
		S.shift
		ans += 1
	end
#	p S
end
puts ans
