A,B = gets.split.map(&:to_i)
if  A <= B && B <= A*6 then
    puts "Yes"
else
    puts "No"
end
