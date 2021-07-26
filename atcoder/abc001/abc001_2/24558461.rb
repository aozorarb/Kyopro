M = gets.to_i/1000.0
if M < 0.1
    puts "00"
elsif 0.1 <= M && M <= 5 
    puts sprintf("%02d",M*10)
elsif 6 <= M &&  M <= 30
    puts (M+50).to_i.to_s
elsif 35 <= M && M <= 70
    puts ((M-30)/5 + 80).to_i
elsif M >= 70
    puts "89"
end
