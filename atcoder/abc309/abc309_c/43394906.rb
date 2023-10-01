# https://atcoder.jp/contests/abc309/tasks/abc309_c


N, K = gets.split.map(&:to_i)
med = Array.new(N) { Array.new(2, 0) }
N.times do |i|
  med[i][0], med[i][1]  = gets.split.map(&:to_i)
end
med = med.sort.reverse
total = 0
# 一番使い続ける必要のあるくすりから足していく
N.times do |i|
  if total + med[i][1] > K
    # そのくすりを使わなくなる日 + 1
    puts med[i][0] + 1
    break
  elsif i == N-1
    puts 1
    break
  else
    total += med[i][1]
  end
end
