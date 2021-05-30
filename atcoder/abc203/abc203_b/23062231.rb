N,K = gets.split.map(&:to_i)
res = 0
floor = 0
#階乗を計算
def factorial(number)
  if number.zero?
    return 0
  end
  return number += factorial(number-1)
end
floor = factorial(K)
for i in 1 .. N do
   res+= 100*i*K+floor
end
puts res