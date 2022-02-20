a,b = gets.split.map(&:to_i)
if b.next == a || b.pred == a || [a,b].max-[a,b].min==9
  puts "Yes"
else
  puts "No"
end