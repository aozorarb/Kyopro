# ABC121 - B
N, M, C = gets.split.map(&:to_i)
B = gets.split.map(&:to_i)
cnt = 0
N.times do |i|
	arr = gets.split.map(&:to_i)
	sum = C
	M.times do |j|
		sum += arr[j] * B[j]
	end
	cnt += 1 if sum > 0
end
puts cnt
