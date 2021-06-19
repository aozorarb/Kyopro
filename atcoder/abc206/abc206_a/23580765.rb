N = gets.to_i
genka = (N * 1.08).floor
T = 206
if genka < T
    puts "Yay!"
elsif genka == T
    puts "so-so"
elsif genka > T 
    puts ":(" 
end