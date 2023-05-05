# https://atcoder.jp/contests/abc296/tasks/abc296_c

require 'set'
N, X = gets.split.map(&:to_i)
As = gets.split.map(&:to_i)
set = Set.new(As)
set.each do |s|
  if set.include? s + X
    puts "Yes"
    exit
  end
end
puts "No"

