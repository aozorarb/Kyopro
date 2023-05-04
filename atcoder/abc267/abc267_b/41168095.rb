# https://atcoder.jp/contests/abc267/tasks/abc267_b


S = gets.chomp
cond = false
# bool true if any line pin are fall down on the ground
line = Array.new(7, false)
10.times do |i|
  if S[i] == '0'
    case i
    when 6
      line[0] = true
    when 3
      line[1] = true
    when 5
      line[5] = true
    when 9
      line[6] = true
    end
  end
end

line[2] = true if S[7] == '0' && S[0] == '0'
line[3] = true if S[4] == '0' && S[0] == '0'
line[4] = true if S[8] == '0' && S[2] == '0'
if S[0] == '0'
  st,  mi =  false, false
  7.times do |i|
    if !line[i] && !st
      st = true
    elsif line[i] && st && !mi
      mi = true
    elsif !line[i]  && mi
      cond = true
    end
  end
end
puts cond ? 'Yes' : 'No'
