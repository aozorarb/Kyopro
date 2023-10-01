class Clock
	def initialize h, m
		@m = m
		@h = h
	end

	def nm
		@m += 1
		if @m >= 60
			@h += 1
			@m %= 60
		end
		@h %= 24
	end

	def print_time
		puts "#{@h} #{@m}"
	end
	def misjudge_time
		while true
			h_str = format("%02d", @h)
			m_str = format("%02d", @m)
			h_sim = "#{h_str[0]}#{m_str[0]}"
			m_sim = "#{h_str[1]}#{m_str[0]}"
			if h_sim.to_i < 24 && m_sim.to_i >= 0 && m_sim.to_i < 60
				print_time()
				break
			end
			nm()
		end
	end
end

h, m = gets.split.map(&:to_i)
clock = Clock.new(h, m)
clock.misjudge_time()
