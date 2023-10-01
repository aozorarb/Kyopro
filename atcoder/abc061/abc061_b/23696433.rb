N,M = gets.split.map(&:to_i)
res = Array.new(N,0)
for i in 0 ... M
    a,b = gets.split.map(&:to_i)
    res[a-1]+=1
    res[b-1]+=1
end
for i in 0 ... N 
    puts res[i]
end