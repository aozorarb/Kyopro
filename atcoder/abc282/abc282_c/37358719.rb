# https://atcoder.jp/contests/abc282/tasks/abc282_c


N = gets.to_i
S = gets.chomp
ans = ""
flg = false
N.times do |i|
  if S[i] == '"'
    if flg
      flg = false
    else 
      flg = true
    end
    ans << '"'
  elsif S[i] == ','
    if flg
      ans << ','
    else
      ans << '.'
    end
  else
    ans << S[i]
  end
end
 puts ans

