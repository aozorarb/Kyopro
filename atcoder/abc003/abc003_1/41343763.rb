# https://atcoder.jp/contests/abc003/tasks/abc003_1


N = gets.to_i
puts (1 .. N).reduce(0) { |res, i| res + i * 10000 * 1.0/N}.to_i
