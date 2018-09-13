require "FizzBuzz/version"

module FizzBuzz

  class FizzBuzz

    def display(number)

      if number % 15 == 0
        return "FizzBuzz"
      end

      if number % 3 == 0
        return "Fizz"
      end

      if number % 5 == 0
        return "Buzz"
      end

      number.to_s
    end
  end

end
