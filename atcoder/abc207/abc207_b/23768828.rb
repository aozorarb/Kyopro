A,B,C,D = gets.split.map(&:to_i)
res = 0
nowRed = 0
nowAqua = A
if B < C*D
    while true
        if nowAqua <= nowRed*D 
            break
        end
        nowAqua+=B
        nowRed+=C
        res+=1
    end
else 
    puts -1
    exit
end
puts res