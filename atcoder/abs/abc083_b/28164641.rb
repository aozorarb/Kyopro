
def find_sum_of_digits(n)
  sum = 0
  while n > 0
    sum += n % 10 #10以上は消す
    n /= 10 #小数点はintでは無視されるのを利用
  end
  return sum
end
N,A,B = gets.split.map(&:to_i)
total = 0
for i in 1 .. N 
  sum = find_sum_of_digits(i)
  if sum.between?(A,B)
    total+=i   
  end
end
puts total