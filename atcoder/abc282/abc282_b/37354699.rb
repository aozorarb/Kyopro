# https://atcoder.jp/contests/abc282/tasks/abc282_b


N, M = gets.split.map(&:to_i)
Ss = Array.new(N) { gets.chomp }

bits = Array.new(N, 0)
N.times do |i|
  M.times do |j|
    bits[i] |= 1 << j if Ss[i][j] == 'o'
  end
  #pp bits[i]
end

#puts
ans = 0
N.times do |i|
  (i+1).upto N-1 do |j|
    # pp bits[i], bits[j]
    # puts "#{i}, #{j}: #{bits[i] | bits[j]}"
    if (bits[i] | bits[j]) + 1 == (1 << M)
      ans += 1
    end
  end
end

puts ans
