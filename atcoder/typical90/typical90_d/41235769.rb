# http://atcoder.jp/contests/typical90/tasks/typical90_d


H, W = gets.split.map(&:to_i)
ass = Array.new(H) { gets.split.map(&:to_i) }
ans = Array.new(H) { Array.new(W) }
line = Array.new(W, 0)
column = Array.new(H, 0)

H.times do |i|
  W.times do |j|
    column[i] += ass[i][j]
  end
end

W.times do |i|
  H.times do |j|
    line[i] += ass[j][i]
  end
end

H.times do |i|
  W.times do |j|
    total = 0
    ans[i][j] = column[i] + line[j] - ass[i][j]
  end
end

ans.each do |as|
  puts as.join(' ')
end
