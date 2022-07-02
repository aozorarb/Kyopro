K = gets.to_i
time = 21*60 + K
time = format("%02d:%02d", time/60, time%60)
puts time