s = gets.split("")
ans = 0
3.times do |i|
  ans+=1 if s[i] == "1"
end
puts ans
