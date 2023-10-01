class Clock
	def initilize
		@hour = 0
		@minute = 0
		@second = 0
	end
	def set(h,m,s)
		@hour = h
		@minute = m
		@second = s 
    end

	def to_str
		return format("%02d:%02d:%02d",@hour,@minute,@second)
    end

	def shift!(diff_second)
		tmp_time = @hour * 3600 + @minute * 60 + @second + diff_second
		@hour = tmp_time / 3600
		tmp_time -= @hour * 3600
		@minute = tmp_time / 60
		tmp_time -= @minute * 60
		@second = tmp_time
		if @hour < 0
			@hour +=24
		elsif @hour >= 24
			@hour-=24
		end
    end
end
hour,minute,second = gets.split.map(&:to_i)
diff_second = gets.to_i
clock = Clock.new
clock.set(hour,minute,second)
puts clock.to_str 
clock.shift!(diff_second)
puts clock.to_str 

