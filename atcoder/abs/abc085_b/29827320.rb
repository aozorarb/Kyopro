require 'set'
N = gets.to_i
mochi = Set.new
N.times do 
  mochi << gets.chomp
end
puts mochi.size
