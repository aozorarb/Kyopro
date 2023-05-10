# https://atcoder.jp/contests/typical90/tasks/typical90_ag


H, W = gets.split.map(&:to_i)

puts (H == 1 || W == 1 ? H * W : ((H+1)/2) * ((W+1)/2))
