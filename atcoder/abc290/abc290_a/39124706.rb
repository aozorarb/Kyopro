n, m = gets.split.map(&:to_i)
pr = gets.split.map(&:to_i)
sl = gets.split.map(&:to_i)
t = 0
sl.each do |d|
  t += pr[d-1]
end
puts t