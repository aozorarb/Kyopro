N = gets.to_i
x = 0
(N/2).upto N do |i|
	if (i*1.08).floor == N
		x = i
		break
	end
end
if x == 0
	puts ":("
else
	puts x
end
