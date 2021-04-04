N = gets
s=0
N.chars.each do |n|
  s+=n.to_i
end
NUM = N.to_s.to_i
if  NUM % s == 0 
  puts "Yes"
else
  puts "No"
end



