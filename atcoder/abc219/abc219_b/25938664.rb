a = gets.chomp
b = gets.chomp
c = gets.chomp
S = [a,b,c]
T = gets.chomp.chars
ans = ""
until T.empty?
	ans += S[(T[0].to_i)-1]
	T.shift
end
puts ans