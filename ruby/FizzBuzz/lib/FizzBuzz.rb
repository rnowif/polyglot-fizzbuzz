require "FizzBuzz/version"

module Kata

  RULES = [
      [15, "FizzBuzz"],
      [3, "Fizz"],
      [5, "Buzz"]
  ]

  class FizzBuzz

    def display(number)

      Kata::RULES.each do |(divisor, value)|
        if number % divisor == 0
          return value
        end
      end

      number.to_s
    end
  end

end

fizz_buzz = Kata::FizzBuzz.new

(1...100).each do |i|
  puts fizz_buzz.display(i)
end
