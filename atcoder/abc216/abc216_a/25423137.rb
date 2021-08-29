x,y = gets.split(".").map(&:to_i)
if 0 <= y && y <= 2
	puts x.to_s + "-"
elsif 3.0 <= y && y <= 6.0
	puts x.to_s 
elsif 7.0 <= y && y <= 9.0
	puts x.to_s + "+"
end