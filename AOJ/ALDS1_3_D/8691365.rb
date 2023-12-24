model = gets.chomp
# \ must be escaped by \ even if surround by singlequote
#model = "\\\\//"
hs = []
h = 0
model.each_char do |c|
  case c
  when '\\'
    hs << h
    h -= 1
  when '/'
    h += 1
    hs << h
  when '_'
    hs << h
  end
end

cur_idx = 0
spot_pairs = []
while cur_idx < hs.size
  f = hs[cur_idx]
  t_idx = hs[cur_idx + 1 .. -1].index(f)
  f_idx = cur_idx
  # if start is up slope or flat, cannot store water
  if t_idx == nil || model[cur_idx] != '\\'
    cur_idx += 1
    next
  else
    t_idx += cur_idx + 1
    cur_idx = t_idx + 1 
  end
  spot_pairs << [f_idx, t_idx]
end

# caluculate
anss = []
spot_pairs.each do |pair|
  ans = 0
  base_h = hs[pair[0]]
  pair[0].upto(pair[1]) do |i|
    old = ans
    case model[i]
    when '/', '\\'
      h = base_h - hs[i] + 1
      ans += h - 0.5
    when '_'
      ans += base_h - hs[i] 
    end
    #puts "#{i}: #{ans - old}"
  end
  anss << ans
end

# print
puts anss.sum.to_i
print anss.size
print ' ' unless anss.size == 0
print anss.map(&:to_i).join(' ')
puts

