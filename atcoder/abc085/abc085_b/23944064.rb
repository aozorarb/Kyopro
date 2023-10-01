N = gets.to_i
d = Array.new
x=1
N.times do
    d << gets.to_i
end
d.sort!.reverse!
(N-1).times do |i|
    if d[i+1] < d[i]
        x+=1
    end
end
p x