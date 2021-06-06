x = gets.chomp
res = 0
for i in 0 ... x.size
    res += x[i].to_i
end
if x.to_i% res == 0
    puts "Yes"
else 
    puts "No"
end