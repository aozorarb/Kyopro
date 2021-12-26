N = gets.to_i
cards = gets.split.map(&:to_i)
cards.sort!
alice,bob = 0,0

until cards.empty?
  alice+=cards.last
  cards.pop
  if cards.empty?
    break
  end
  bob+=cards.last
  cards.pop
end

puts alice - bob

