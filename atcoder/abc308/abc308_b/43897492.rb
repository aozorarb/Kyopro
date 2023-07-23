# https://atcoder.jp/contests/abc308/tasks/abc308_b


N, M = gets.split.map(&:to_i)
Cs = gets.chomp.split
Ds = gets.chomp.split
Ps = gets.split.map(&:to_i)
pri = Hash.new(Ps[0])
M.times { |i| pri[Ds[i]] = Ps[i+1] }
res = 0
Cs.each { |c| res += pri[c] }
puts res

