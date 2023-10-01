N = gets.to_i
X = gets.split.map(&:to_i)
table = Array.new(100, 0)
100.times do |i|
  N.times do |j|
    table[i] += (X[j] - i)**2
  end
end
puts table.min
