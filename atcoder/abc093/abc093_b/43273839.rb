# https://atcoder.jp/contests/abc093/tasks/abc093_b
require 'set'
s = Set.new
A, B, K = gets.split.map(&:to_i)
K.times { |i| s << i+A if (i+A).between?(A, B) }
K.times { |i| s << B-i if (B-i).between?(A, B) }
puts s.sort.to_a
