N = gets.to_i
S = gets
res = "a"
N.times do |i|
    if i % 2 == 0  && S[i] == '1'
        res = "Takahashi"
      break
    elsif i % 2 == 1 && S[i] == '1'
        res = "Aoki"
      break
    end
end
puts res