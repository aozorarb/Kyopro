# https://atcoder.jp/contests/abc309/tasks/abc309_b


N = gets.to_i
Ass = Array.new(N) { gets.chomp }

def cycle arr
  ret = Array.new(N) { Array.new(N, 0) }
  n = N - 1
  n.times { |i| ret[0][i+1] = arr[0][i] }
  n.times { |i| ret[i+1][n] = arr[i][n] }
  n.times { |i| ret[n][i] = arr[n][i+1] }
  n.times { |i| ret[i][0] = arr[i+1][0] }

  1.upto n-1 do |i|
    1.upto n-1 do |j|
      ret[i][j] = arr[i][j]
    end
  end
  ret
end

cycle(Ass).each { puts _1.join('') }
