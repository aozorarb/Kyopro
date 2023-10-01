Pair = Struct.new(:first, :second)
N, M = gets.split.map(&:to_i)
road = Array.new()
road_relate = Array.new
N.times do |i|
	road_relate.push []
end
road_num = Array.new(N, 0)

M.times do |i|
	a, b = gets.split.map(&:to_i)
	road.push Pair.new(a, b)
end

M.times do |i|
	road_num[road[i][0] - 1] += 1
	road_num[road[i][1] - 1] += 1

	road_relate[road[i].first - 1].push road[i].second
	road_relate[road[i].second - 1].push road[i].first
end
#sort
N.times do |i|
	road_relate[i] = road_relate[i].sort
end
N.times do |i|
	print road_num[i]
	road_num[i].times do |j|
		print " #{road_relate[i][j]}"
	end
	puts
end

