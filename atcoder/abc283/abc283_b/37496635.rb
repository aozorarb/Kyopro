# https://atcoder.jp/contests/abc283/tasks/abc283_b
N = gets.to_i
prog = gets.split.map(&:to_i)
Q = gets.to_i
Q.times do |i|
	qm, q1, q2 = gets.split.map(&:to_i)
	if qm == 1
		prog[q1-1] = q2
	elsif qm == 2
		puts prog[q1-1]
	end
end	
