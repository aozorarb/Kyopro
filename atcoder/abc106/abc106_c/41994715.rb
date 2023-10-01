# https://atcoder.jp/contests/abc106/tasks/abc106_c
# 10**18までなら2**(5*10**15)しかアクセスできない
# K以前に1以外があるならその数

S = gets.chomp
K = gets.to_i
ans = '1'
K.times do |i|
  unless S[i] == '1'
    ans = S[i] 
    break
  end
end
puts ans
