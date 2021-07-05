A,B = gets.split.map(&:to_i)
curtain = B*2
ans = A - curtain
if ans <= 0
  puts 0
else
  puts ans
end