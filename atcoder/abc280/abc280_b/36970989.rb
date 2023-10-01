# https://atcoder.jp/contests/abc280/tasks/abc280_b


N = gets.to_i
Ss = gets.split.map(&:to_i)
history = 0
ans = []
N.times do |i|
	ans.push Ss[i] - history
	history += Ss[i] - history
end
(N - 1).times do |i|
	print "#{ans[i]} "
end
print "#{ans[N-1]}\n"
