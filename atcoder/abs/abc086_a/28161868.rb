a,b = gets.split.map(&:to_i)
c = a*b
if c.odd?
  puts "Odd"
else
  puts "Even"
end
