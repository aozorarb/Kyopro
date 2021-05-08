n = gets.to_i
for i in 1 .. 30
  if n <= i*100
    puts i
    break
  else
    next
  end
end