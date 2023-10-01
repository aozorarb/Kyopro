A = gets.to_i
B = gets.to_i
C = gets.to_i
X = gets.to_i
ans = 0
(A+1).times do |i|
  (B+1).times do |l|
    (C+1).times do |k|
      sum = 500 * i + 100 * l + 50 * k
      if sum == X
        ans+=1
      end
    end
  end
end
puts ans