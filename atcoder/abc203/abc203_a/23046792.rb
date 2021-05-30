A,B,C = gets.split.map(&:to_i)
if A == B then
    puts C
elsif A == C 
    puts B
elsif B == C 
    puts A
else
    puts 0
end