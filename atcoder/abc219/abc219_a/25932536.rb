X = gets.to_i
ans = 0
if X.between?(0,39) then ans = 40 - X
elsif X.between?(40,69) then ans = 70 - X
elsif X.between?(70,89) then ans = 90-X
end
unless ans == 0
  puts ans
else
  puts "expert"
end