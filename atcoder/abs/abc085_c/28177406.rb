N,Y = gets.split.map(&:to_i)
million,fifty_hundred ,ten_hundred  = -1, -1, -1 # x = 10000, y = 5000, z = 1000

for i in 0 .. N
  for j in 0 .. (N - i)
    k = N - i - j
    total = 10000 * i + 5000 * j + 1000 * k
    if total == Y
      million = i 
      fifty_hundred = j
      ten_hundred = k
    end
  end
end
puts "#{million} #{fifty_hundred} #{ten_hundred}"