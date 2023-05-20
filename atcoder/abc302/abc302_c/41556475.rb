# https://atcoder.jp/contests/abc302/tasks/abc302_c


N, M = gets.split.map(&:to_i)
Ss = Array.new(N) { gets.chomp }
cond = false

def diff_cnt s1, s2
  ans = 0
  M.times do |i|
    ans += 1 unless s1[i] == s2[i]
  end
  ans
end
Ss.permutation do |s|
  (N-1).times do |i|
    unless diff_cnt(s[i], s[i+1]) == 1
      break
    end
    cond = true if i == N-2
  end
  break if cond
end

puts cond ? 'Yes' : 'No'
