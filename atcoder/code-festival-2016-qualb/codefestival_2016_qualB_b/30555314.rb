N,A,B = gets.split.map(&:to_i)
S = gets.chomp
passed = 0
overseas = 0
N.times do |i|
  if S[i] == 'a'
    if A + B > passed
      puts "Yes"
      passed+=1
      #puts "Now: " + S[i] + ", passed: " + passed.to_s + ", overseas: " + overseas.to_s
    else
      puts "No"
    end
  elsif S[i] == 'b'
    overseas+=1 # 海外の学生の順位
    if B >= overseas && A + B > passed
      puts "Yes"
      passed+=1
      #puts "Now: " + S[i] + ", passed: " + passed.to_s + ", overseas: " + overseas.to_s
    else
      puts "No"
    end
  else
    puts "No"
  end
end