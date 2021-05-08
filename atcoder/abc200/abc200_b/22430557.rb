n = gets.split(" ").map(&:to_i)
k = n[1]
n = n[0]
k.times do|i|
    if n % 200 == 0
        n/=200
    else
        n = (n.to_s + "200").to_i
    end
end
puts n