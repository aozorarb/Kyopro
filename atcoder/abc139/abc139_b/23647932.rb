# A,B = gets.split.map(&:to_i)
# res = (B-1/A-1)/(A-1)/(A-1)
# puts res
A,B = gets.split.map(&:to_i)
ans = 0
outlet = 1
while outlet <B
    outlet-=1
    outlet+=A
    ans+=1
end
puts ans