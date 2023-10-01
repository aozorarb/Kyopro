N,A,X,Y = gets.split.map(&:to_i)
if N>A
  B = N-A
  res = Y*B + X*A
else 
  res = X*N
end
puts res