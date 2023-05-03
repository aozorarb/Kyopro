# https://atcoder.jp/contests/abc261/tasks/abc261_b


N = gets.to_i
Ass = Array.new(N) { gets.chomp }
cond = true
N.times do |i|
  N.times do |j|
    next if Ass[i][j] == '-'
    cond = false if Ass[i][j] == 'W' && Ass[j][i] != 'L'
    cond = false if Ass[i][j] == 'D' && Ass[j][i] != 'D'
    cond = false if Ass[i][j] == 'L' && Ass[j][i]  != 'W'
  end
end
puts cond ? "correct" : "incorrect"


