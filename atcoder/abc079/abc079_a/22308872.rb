S = gets
for i in 0 ... 2
  if S[i] == S[i+1]
    if S[i+1] == S[i+2]
      puts "Yes"
      exit
    end
  end
end
puts "No"