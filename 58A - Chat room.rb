str = gets
str = str.split('')
key = "hello"
i = 0
count = 0

str.each {|c|
    if c == key[i]
        count+=1
        i+=1
    end
}
    
if count == 5
    puts "YES"
else
    puts "NO"
end
