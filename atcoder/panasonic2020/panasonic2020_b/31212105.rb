# Panasonic2020 - B
H, W = gets.split.map(&:to_i)
if H==1 || W ==1
	puts 1
	exit
end
ans = H*W/2
if (H*W).odd?
	ans+=1
end
puts ans
