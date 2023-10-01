N  = gets.to_i
i = 1
sum = 0
while true
    sum+=i 
    if sum >= N
        break
    end
    i+=1
end
puts i
