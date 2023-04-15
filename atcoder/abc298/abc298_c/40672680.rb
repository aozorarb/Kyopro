# https://atcoder.jp/contests/abc298/tasks/abc298_c
require 'set'
N = gets.to_i
box = Array.new(N+1) { [] }
box_from_cards = Hash.new()
Q = gets.to_i
Q.times do |i|
  op, d, b = gets.split.map(&:to_i)
  case op
  when 1
    box[b].push d
    box_from_cards[d] = Set.new unless box_from_cards.include?(d)
    box_from_cards[d].add b
  when 2
    puts box[d].sort.join(' ')
  when 3
    puts box_from_cards[d].sort.join(' ')
  end
end
