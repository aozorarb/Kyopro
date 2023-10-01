a = gets
step,same = true,true
3.times do |i|
  if a[i] !=a[i+1]
    same = false
  end
  if (a[i].to_i+1)%10 != a[i+1].to_i
    step = false
  end
end
puts same || step ? "Weak" : "Strong"