# https://atcoder.jp/contests/abc307/tasks/abc307_b

N = gets.to_i
Ss = Array.new(N) { gets.chomp }
cond = false
N.times do |i|
  N.times do |j|
    next if i == j
    str = Ss[i] + Ss[j]
    if str == str.reverse
      cond = true
      break
    end
  end
end
puts cond ? 'Yes' : 'No'
