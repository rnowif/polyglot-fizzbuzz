RSpec.describe FizzBuzz do

  _fizz_buzz = FizzBuzz::FizzBuzz.new

  it "has a version number" do
    expect(FizzBuzz::VERSION).not_to be nil
  end

  it "displays the number" do
    expect(_fizz_buzz.display(2)).to eq("2")
  end

  it "displays 'Fizz' when multiple of 3" do
    expect(_fizz_buzz.display(3)).to eq("Fizz")
  end

  it "displays 'Buzz' when multiple of 5" do
    expect(_fizz_buzz.display(5)).to eq("Buzz")
  end

  it "displays 'FizzBuzz' when multiple of 15" do
    expect(_fizz_buzz.display(15)).to eq("FizzBuzz")
  end
end
