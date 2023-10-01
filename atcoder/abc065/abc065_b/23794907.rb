N = gets.to_i
A = Array.new
N.times do 
    A << gets.to_i
end
res = 0
flg = false
current = 0
N.times do |i|
    if current == 1
        flg = true
        break
    else
        current = A[current]-1
        res+=1
    end
end
if flg
    puts res
else
    puts -1
end