# https://atcoder.jp/contests/abc294/tasks/abc294_c


N, M = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)
copy_a = A.clone
B = gets.split.map(&:to_i)
copy_b = B.clone
connect = Hash.new

(N+M).times do |i|
  if A.empty?
    B.size.times do |j|
      connect[B.delete_at 0] = i+j
    end
  elsif B.empty?
    A.size.times do |j|
      connect[A.delete_at 0] = i+j
    end
  else
    if A.first > B.first
      connect[B.delete_at 0] = i
    else
      connect[A.delete_at 0] = i
    end
  end
end
answer = []
copy_a.each do |a|
  answer << (connect[a] + 1)
end
puts answer.join(' ')
answer.clear
copy_b.each do |b|
  answer << (connect[b] + 1)
end
puts answer.join ' '
