N = gets.to_i
mochi = [0]
N.times do 
  omochi = gets.to_i
  mochi.append omochi
end
mochi.sort!.reverse!
dan = 0
until mochi[0] == 0
  if mochi[0] > mochi[1]
    dan+=1
    mochi.shift
  else
    mochi.shift
  end
end
puts dan

