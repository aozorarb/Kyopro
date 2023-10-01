# https://atcoder.jp/contests/abc299/tasks/abc299_a


N = gets.to_i
S = gets.chomp
cond = false
start = false
S.each_char do |c|
  if start && c == '*'
    cond = true
  elsif start == false && c == '|'
    start = true
  elsif start == true && c == '|'
    start = false
  end
end
puts cond ? 'in' : 'out'
