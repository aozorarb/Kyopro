# https://atcoder.jp/contests/abc281/tasks/abc281_c


N, T = gets.split.map(&:to_i)
As = gets.split.map(&:to_i)
time = Array.new(N+1, 0)
time[0] = 0
N.times do |i|
  time[i+1] = time[i] + As[i]
end
p_t = T % time[N]
ans_t = ans_m = -1
N.times do |i|
  if time[i] < p_t && p_t < time[i+1]
    ans_t = p_t - time[i]
    ans_m = i+1
  end
end
puts "#{ans_m} #{ans_t}"
