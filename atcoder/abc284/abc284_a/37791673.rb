# https://atcoder.jp/contests/abc284/tasks/abc284_a


N = gets.to_i
Ss = Array.new(N) { gets.chomp }
(N-1).downto 0 do |i|
    puts Ss[i]
end
