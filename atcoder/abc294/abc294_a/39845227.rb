# https://atcoder.jp/contests/abc294/tasks/abc294_a


N = gets.to_i
A = gets.split.map(&:to_i)
flg = false
A.each do |e|
  if e.even?
    if flg
      print " #{e}"
    else
      print e
      flg = true
    end
  end
end
puts
