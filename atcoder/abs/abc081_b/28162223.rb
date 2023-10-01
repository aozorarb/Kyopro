N = gets.to_i
array = gets.split.map(&:to_i)
ans = 0
flg = true
while true
  N.times do |i|
    if array[i] % 2 == 0
      array[i]/=2
    else
      flg = false
      break
    end
  end
  if flg
    ans +=1
  else 
    break
  end
end
puts ans