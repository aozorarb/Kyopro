cards = []
(4*13).times do |i|
    cards[i] = -1#i:0=>S,1  52=>D,12
end
N = gets.to_i
N.times do |i|
    chr,num = gets.split
    idx = num.to_i-1
    case chr
    when 'S'
        idx+=0
    when 'H'
        idx+=13
    when 'C'
        idx+=26
    when 'D'
        idx+=39
    end
    cards[idx] = 0
end
(4*13).times do |i|
    if cards[i] == 0
        next
    else
        unless i == 0 #0divide is bad
            chr = 
            case i/13
            when 0
                'S'
            when 1
                'H'
            when 2
                'C'
            when 3
                'D'
            end
            puts chr + ' ' + (i%13+1).to_s
        else
            puts 'S 1'
        end
    end
end



