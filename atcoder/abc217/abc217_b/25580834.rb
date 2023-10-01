ans = ["ABC","AGC","AHC","ARC"]
s = []
3.times do 
	s.push(gets.chomp!)
end
3.times do |i|
	ans.delete(s[i])
end
puts ans[0]
