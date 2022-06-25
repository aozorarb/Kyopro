N, M = gets.split.map(&:to_i)
str = String.new	
("A".."Z").each do |i|
	str << i*N
end
puts str[M-1]