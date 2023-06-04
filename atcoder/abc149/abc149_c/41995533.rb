# https://atcoder.jp/contests/abc149/tasks/abc149_c
require 'prime'

X = gets.to_i
X.upto 10**6 do |i|
  if i.prime?
    puts i
    break
  end
end
