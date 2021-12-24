s = gets.split("")
count = 0
3.times do |i|
  count+=1 if s[i] == '1'
end
puts count