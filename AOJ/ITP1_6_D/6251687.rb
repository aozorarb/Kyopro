#input & declare
n,m = gets.split.map(&:to_i)
matrix = []
vector = []
n.times do 
    vector.push(gets.split.map(&:to_i))
end
m.times do 
 	matrix.push(gets.to_i)
end 
#output & algorithm
n.times do |i|
    rst = 0
    m.times do |j|
        rst += (matrix[j] * vector[i][j])
    end
  puts rst 
end
