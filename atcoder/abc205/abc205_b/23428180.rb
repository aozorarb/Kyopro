N = gets.to_i
A = gets.split.map(&:to_i)
A.sort!
flg = false
N.times do|i|
    if A[i] != i+1
        flg = true
    end
end
if flg
    puts "No"
else 
    puts "Yes"
end