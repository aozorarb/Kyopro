A,B = gets.split.map(&:to_i)
res = 0
for i in A .. B do#5桁
    is = i.to_s
    if is[4] == 0
        next
    end
    reversed = is.reverse
    if reversed == is
        res+=1
    end
end
puts res