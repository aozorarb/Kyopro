N = gets.to_i
A = gets.split.map(&:to_i)
res = 0
for i in 0 ... N
    if A[i] <= 10
        next
    elsif A[i] > 10
        res+= A[i] - 10
    end
end
puts res