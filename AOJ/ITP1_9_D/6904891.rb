def print_str(str, from, to)
	dis = to - from + 1
	part = str[from, dis]
	puts part
end

def reverse(str, from, to)
	dis = to - from + 1
	str[from, dis] = str[from, dis].reverse!
end

def replace(str, from, to, sub)
	dis = to - from + 1
	str[from, dis] = sub
end

str = gets.chomp
n = gets.to_i
n.times do |i|
	command, from, to, sub = gets.split
	from = from.to_i
	to = to.to_i
	sub.chomp! unless sub.nil?
	case command
	when "print"
		print_str(str, from, to)
	when "reverse"
		reverse(str, from, to)
	when "replace"
		replace(str, from, to, sub)
	end
end

		


