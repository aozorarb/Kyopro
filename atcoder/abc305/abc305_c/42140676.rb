# https://atcoder.jp/contests/abc305/tasks/abc305_c


H, W = gets.split.map(&:to_i)
Sss = Array.new(H) { gets.chomp }
# answer is a mass which between cookies
DIR = [[1, 0], [-1, 0], [0, 1], [0, -1]]
def between_cookies?(y, x)
  return false if Sss[y][x] == '#'
  cookies = 0
  DIR.each do |d|
    sx, sy = x + d[0], y + d[1]
    next unless sx.between?(0, W-1) && sy.between?(0, H-1)
    cookies += 1 if Sss[sy][sx] == '#'
  end
  return true if cookies >= 2
  false
end


ans = [-1, -1]
H.times do |i|
  W.times do |j|
    ans = i+1, j+1 if between_cookies?(i, j)
  end
end
puts ans.join(' ')
