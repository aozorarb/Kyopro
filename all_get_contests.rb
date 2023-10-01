Ignore_contest = %w(abc316)
AtCoder_rel_dir = 'ac'
Contests_min = 1
Contests = %w(abc arc agc)
def search_missing_files
  ret = {}
  ret["missing_files"] = {}
  ret['max'] = {}
  Contests.each do |cont|
    list = Dir.glob("#{cont}*").map { |f| f.slice(/\d+/).to_i }
    ret['max'][cont] = list.max
    next if list.empty?
    Contests_min.upto list.max do |i|
       ret["missing_files"][cont] = [] unless ret["missing_files"].key?(cont)
       ret["missing_files"][cont] << "#{format('%03d', i)}" unless list.include? i
    end
  end
  ret
end

def download_all(info)
  Contests.each do |cont|
    info['missing_files'][cont].each do |miss|
      `at_coder_friends setup #{cont}#{miss}` unless Ignore_contest.include? "#{cont}#{miss}"
      unless $? == 0
        puts "maybe not found #{cont}#{miss}"
      else
        puts "get #{cont}#{miss}"
      end
    end

    (info['max'][cont] .. nil).each do |num|
      `at_coder_friends setup #{cont}#{num} 2>> /dev/null`
      unless $? == 0
        puts "Got all #{cont}"
        break
      end
      puts "get #{cont}#{num}"
    end
  end
end

def main
  Dir.chdir("./#{AtCoder_rel_dir}")
  info = search_missing_files
  download_all(info)
end
main
