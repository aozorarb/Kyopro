require 'set'
distinct = Set[]
N = gets.to_i
A = gets.split.map(&:to_i)
A.each do |obj|
  distinct << obj
end
puts distinct.size
