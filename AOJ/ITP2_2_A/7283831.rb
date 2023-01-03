n, q = gets.split.map(&:to_i)
stack = Array.new(n) {Array.new}
q.times do |i|
    o, t, x = gets.split.map(&:to_i)
    if o == 0
        stack[t].push x
    elsif o == 1
        puts stack[t].last unless stack[t].empty?
    elsif o == 2
        stack[t].pop
    end
end

