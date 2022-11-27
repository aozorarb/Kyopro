# https://atcoder.jp/contests/abc279/tasks/abc279_b

str = gets.chomp
T = gets.chomp
cond = false
#warn "times: #{str.size - T.size}"
(str.size - T.size + 1).times do |i|
	warn "str[#{i}...#{i+T.size}]: #{str[i...i+T.size]}"
	cond = true if str[i...i+T.size] == T
end
cond = true if str == T

puts cond ? 'Yes' : 'No'

# コンテスト: WA
# 7行目のループを+1まで回していなかったから
# Tが一文字でSの最後にマッチするパターンを見つけられなかった
