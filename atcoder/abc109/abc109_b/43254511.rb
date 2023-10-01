# https://atcoder.jp/contests/abc109/tasks/abc109_b
require 'set'


seen = Set.new
N = gets.to_i
Ws = Array.new(N) { gets.chomp }
prev = Ws[0][-1]
cond = true
seen << Ws[0]
1.upto(N-1) do |i|
  cond = false if prev != Ws[i][0] || seen.add?(Ws[i]).nil?
  prev = Ws[i][-1]
end

puts cond ? 'Yes' : 'No'
