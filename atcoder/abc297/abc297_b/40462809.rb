# https://atcoder.jp/contests/abc297/tasks/abc297_b


S = gets.chomp
cond1 = false
cond2 = false
8.times do |i|
  (i+1).step 8, 2 do |j|
    cond1 = true if S[i] == S[j] && S[i] == 'B'
  end
end

isR = false
8.times do |i|
  if S[i] == 'R'
    isR = (isR ? false : true)
  end
  cond2 = true if S[i] == 'K' && isR
end


puts (cond1 && cond2) ? 'Yes' : 'No'
