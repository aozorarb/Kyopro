bool = [false,false,false,false]
S = Array.new
4.times do |i|
    S.push(gets.chomp!)
end

4.times do |i|
    case S[i]
    when "H"
        bool[0] = true
        
    when "2B"
        bool[1] = true
        
    when "3B" 
        bool[2] = true
        
    when "HR"
        bool[3] = true
    end
end

if bool[0] && bool[1] && bool[2] && bool[3]
    puts "Yes"
else
    puts "No"
end