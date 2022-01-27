n,x = gets.split.map(&:to_i)
loop do
  ans = 0
  break if n+x == 0
  1.upto(n) do |i|
    (i+1).upto(n) do |j|
      (j+1).upto(n) do |k|
        ans+=1 if i+j+k == x
      end
    end
  end
  puts ans
  n,x = gets.split.map(&:to_i)
end
