# https://atcoder.jp/contests/abc297/tasks/abc297_c


H, W = gets.split.map(&:to_i)
# eval from back
place = Array.new(H) { gets.chomp }
H.times do |i|
  (W-1).times do |j|
    if place[i][j] == place[i][j+1] && place[i][j] == 'T'
      place[i][j] = 'P'
      place[i][j+1] = 'C'
    end
  end
end

puts place 
