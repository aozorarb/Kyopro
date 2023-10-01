a = gets.split.map(&:to_i)
res = 0
a.each do |i| 
  case i
    when 1 then
      res+=6
    when 2 then
      res+=5
    when 3 then
      res+=4
    when 4 then
      res+=3
    when 5 then
       res+=2
    when 6 then
      res+=1
    end
end
puts res