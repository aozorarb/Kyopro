a,b = gets.split.map(&:to_i)
d = a / b
m = a % b
f = (a * 1.0) / b
puts format("%d %d %.8f",d,m,f)
