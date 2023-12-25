# checked answer
# input
N, K = gets.split.map(&:to_i)
W = []
N.times { W << gets.to_i }
l, r = 0, W.sum

# solve
while l+1 < r
  m = (l+r) / 2
  t, s = 0, 0
  f = false
  N.times do |i|
    # |= enable hold f is true
    f |= W[i] > m
    #warn "#{s} + #{W[i]} , #{m}"
    # s: sum temporary
    if s + W[i] > m
      # s + W[i] > m, reset s and t += 1
      s = W[i]
      t += 1
    else
      s += W[i]
    end
  end
  # the rest
  t += 1 unless s == 0
  # W[i] <= m && can store
  if !f && t <= K
    r = m 
  else
    l = m
  end
  # warn "[#{l}, #{r}] used truck: #{t}, ok?: #{!f && t <= K}"
end

puts r

