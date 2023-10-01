# https://atcoder.jp/contests/abc116/tasks/abc116_b

S = gets.to_i
def f(n)
  if n.odd?
    3*n + 1
  else
    n/2
  end
end
prev = S
bac = {}
(1..nil).each do |i|
  if i == 1
    res = S
  else
    res = f(prev)
  end
  if bac.include? res
    puts i
    break
  else
    bac[res] = [i]
  end
  prev = res
end

