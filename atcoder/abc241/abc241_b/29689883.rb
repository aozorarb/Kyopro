N,M = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)
B = gets.split.map(&:to_i)
can = false
M.times do |i|
  A
  flg = true
  N.times do |j|
    if A[j] == B[i]
      flg = false
      can = true
      A.delete_at j
      break
    end
  end
  if flg
    can = false
    break
  end
end
if can
  puts "Yes"
else
  puts "No"
end