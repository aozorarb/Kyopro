dirc,W = gets.split.map(&:to_i)
Wm =  (W / 60.0).round(1)
if Wm <= 0.2
    Wmf = 0
elsif 0.3 <= Wm && Wm <= 1.5
    Wmf = 1
elsif 1.6 <= Wm && Wm <= 3.3
    Wmf = 2
elsif 3.4 <= Wm && Wm <= 5.4
    Wmf = 3
elsif 5.5 <= Wm && Wm <= 7.9
    Wmf = 4
elsif 8.0 <= Wm && Wm <= 10.7
    Wmf = 5
elsif 10.8 <= Wm && Wm <= 13.8
    Wmf = 6
elsif 13.9 <= Wm && Wm <= 17.1
    Wmf = 7
elsif 17.2 <= Wm && Wm <= 20.7
    Wmf = 8
elsif 20.8 <= Wm && Wm <= 24.4
    Wmf = 9
elsif 24.5 <= Wm && Wm <= 28.4
    Wmf = 10
elsif 28.5 <= Wm && Wm <= 32.6
    Wmf = 11
elsif 32.7 <= Wm
    Wmf = 12
end#ここで風速は確定
wind_dirc = ["N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"]
# def range_check(range,dirc = 0)
#     if dirc >= range[0] && dirc < range[1]
#         return true
#     else 
#         return false
#     end
# end
dircF = wind_dirc[(((dirc*10+1125)/2250)%16).round]
unless Wmf == 0#ここで風向を求める
    print "#{dircF} "
    puts Wmf
else#風力が0の場合
    print "C " 
    puts 0
end