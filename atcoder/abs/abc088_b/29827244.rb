N = gets.to_i
arr = gets.split.map(&:to_i)
arr.sort!
alice,bob = 0, 0
until arr.empty?
  alice += arr.pop.to_i
  bob += arr.pop.to_i
end
puts alice - bob