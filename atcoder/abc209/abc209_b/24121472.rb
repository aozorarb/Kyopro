N,X= gets.split.map(&:to_i)
a = gets.split.map(&:to_i)
store_value = 0
N.times do |i|
    if i % 2 == 1
        a[i] = a[i]-1
    end
end
N.times do |i|
    store_value+=a[i]
end
if store_value <= X
    puts "Yes"
else
    puts "No"
end