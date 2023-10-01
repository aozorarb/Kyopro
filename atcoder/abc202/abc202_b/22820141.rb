s = gets.chomp!
s.reverse!#反対にする
for i in 0 ... s.size do
    case s[i]
    when "6"
        s[i] = "9"
    when "9"
        s[i] = "6"
    end
end
puts s