N = gets.split(" ").map(&:to_i)
P = N[0]*N[1]
if P%2 == 0
  puts "Even"
else
  puts "Odd"
end