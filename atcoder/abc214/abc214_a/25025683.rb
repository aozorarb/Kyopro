N = gets.to_i
if N < 126
	puts 4
elsif 125 < N && N < 212
	puts 6
elsif 211 < N && N < 215
	puts 8
end