# https://atcoder.jp/contests/abc310/tasks/abc310_b
require 'set'
N, M = gets.split.map(&:to_i)
P, F = Array.new(N, 0), Array.new(N) { Set.new }
N.times do |i|
  l = gets.split.map(&:to_i)
  P[i] = l[0]
  l[1].times do |j| # C.times
    F[i] << l[2+j]
  end
end
cond = false

N.times do |i|
  N.times do |j|
    next if i == j
    if P[i] >= P[j] && (F[i].subset?(F[j])) && (F[j].size > F[i].size || P[i] > P[j])
      #puts "upgrade: #{i} #{j}"
      cond = true
      break
    end
  end
end
puts (cond ? 'Yes' : 'No' )
