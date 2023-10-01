a,b = gets.split(" ")
s = "#{a}#{b}"
num = s.to_i
a = 0
for i in 0 .. 100100 do
 if i**2 == num then
   puts "Yes"
   a +=1
 end
end
if a == 0 
  puts "No"
end