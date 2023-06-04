# https://atcoder.jp/contests/abc103/tasks/abc103_b


S = gets.chomp
T = gets.chomp
size = S.size
cond = false
size.times do |i|
  str = ""
  i.upto(size-1) do |j|
    str << S[j]
  end
  0.upto i-1 do |j|
    str << S[j]
  end
  if str == T
    cond = true
    break
  end
end

puts cond ? 'Yes' : 'No'
