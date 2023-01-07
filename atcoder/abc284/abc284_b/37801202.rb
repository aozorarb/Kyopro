# https://atcoder.jp/contests/abc284/tasks/abc284_b


T = gets.to_i
T.times do |i|
    res = 0
    n = gets.to_i
    a = gets.split.map(&:to_i)
    a.each do |aa|
        res += 1 if aa.odd?
    end
    puts res
end
