R, C = gets.split.map(&:to_i)
arr = [[], []]
2.times do |i|
  arr[i][0], arr[i][1] = gets.split.map(&:to_i)
end
puts arr[R-1][C-1]
