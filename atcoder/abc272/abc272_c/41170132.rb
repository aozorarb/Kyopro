# https://atcoder.jp/contests/abc272/tasks/abc272_c


N = gets.to_i
As = gets.split.map(&:to_i).sort
# max even + max-1 even or max odd + max-1 odd
odds = As.select(&:odd?)
evens = As.select(&:even?)
if odds.size < 2 && evens.size < 2
  puts -1
  exit
elsif odds.size < 2
  puts evens.max + evens.max(2)[1]
elsif evens.size < 2
  puts odds.max + odds.max(2)[1]
else
  om = odds.max + odds.max(2)[1]
  em = evens.max + evens.max(2)[1]
  puts (om > em ? om : em)
end

