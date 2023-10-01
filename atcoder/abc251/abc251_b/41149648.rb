# https://atcoder.jp/contests/abc251/tasks/abc251_b


N, W = gets.split.map(&:to_i)
As = gets.split.map(&:to_i)
buget = Hash.new(false)
N.times do |i|
  sum = As[i]
  buget[sum] = true
  (i+1).upto N-1 do |j|
    sum2 = sum + As[j]
    buget[sum2] = true
    (j+1).upto N-1 do |k|
      buget[sum2 + As[k]] = true
    end
  end
end
ans = 0
1.upto(W) { |i| ans += 1 if buget[i] }
puts ans

