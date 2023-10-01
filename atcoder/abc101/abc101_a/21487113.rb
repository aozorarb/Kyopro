S = gets.chars
result = 0
S.each do |i|
  if i == "+"
    result+=1
  elsif i == "-" 
    result-=1
  end
end
puts result