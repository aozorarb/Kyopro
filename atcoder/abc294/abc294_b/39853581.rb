# https://atcoder.jp/contests/abc294/tasks/abc294_b


H, W = gets.split.map(&:to_i)
Ass = Array.new(H) { gets.split.map(&:to_i) }

Ass.each do |line|
  line.each do |c|
    if c == 0
      print '.'
    else
      print ('A'.ord + c - 1).chr
    end
  end
  puts
end
