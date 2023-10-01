# https://atcoder.jp/contests/abc261/tasks/abc261_c


N = gets.to_i
count = Hash.new(0)
Ss = Array.new(N) { gets.chomp }
Ss.each do |s|
  if count[s] == 0
    puts s
    count[s] += 1
  else
    puts "#{s}(#{count[s]})"
    count[s] += 1
  end
end
