# https://atcoder.jp/contests/abc133/tasks/abc133_b


N, D = gets.split.map(&:to_i)
Xss = Array.new(N) { gets.split.map(&:to_i) }

def n_dim_dis(p1, p2)
  ans = 0
  D.times { |i| ans += (p1[i] - p2[i])*(p1[i] - p2[i]) }
  Math.sqrt(ans)
end

ans = 0
N.times do |i|
  (i+1).upto N-1 do |j|
    ans += 1 if n_dim_dis(Xss[i], Xss[j]) % 1 == 0
  end
end

puts ans
