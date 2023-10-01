# https://atcoder.jp/contests/abc299/tasks/abc299_b


N, T = gets.split.map(&:to_i)
Cs = gets.split.map(&:to_i)
Rs = gets.split.map(&:to_i)
Card = Struct.new(:color, :val, :idx)
cards = Array.new(N) { Card.new }
N.times do |i|
  cards[i].color = Cs[i]
  cards[i].val = Rs[i]
  cards[i].idx = i+1
end
if Cs.include?(T)
  puts cards.select { _1.color == T }.sort { |a, b| a.val <=> b.val }.reverse[0].idx
else
  puts cards.select {_1.color == Cs[0] }.sort { |a, b| a.val <=> b.val }.reverse[0].idx
end
