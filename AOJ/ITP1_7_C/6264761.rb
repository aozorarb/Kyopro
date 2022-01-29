r,c,x_sum,r_sum,c_sum = 0,0,0,0,0
r,c = gets.split.map(&:to_i)
table = Array.new
r.times do |i|
  row = gets.split.map(&:to_i)
  table.push row
end
table.push []
r.times do |i|
  r_sum = 0
  c.times do |j|
    r_sum += table[i][j]
  end
  table[i][c] = r_sum
end
c_sum_arr = []
c.times do |i|
  c_sum = 0
  r.times do |j|
    c_sum += table[j][i]
  end
  c_sum_arr.push c_sum
end

c.times do |i|
  table[r][i] = c_sum_arr[i]
  x_sum += c_sum_arr[i]
end
table[r][c] = x_sum
(r+1).times do |i|
  (c+1).times do |j|
    print table[i][j]
    print " " unless j == c
  end
  puts
end
