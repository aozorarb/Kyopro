# https://atcoder.jp/contests/abc308/tasks/abc308_a


Ss = gets.split.map(&:to_i)
cond = Array.new(3, false)
cond[0] = (Ss == Ss.sort)
cond[1] = (Ss.all? { |s| s.between?(100, 675) } )
cond[2] = (Ss.all? { |s| s % 25 == 0 } )
puts ( cond.all? ? "Yes" : "No" )

