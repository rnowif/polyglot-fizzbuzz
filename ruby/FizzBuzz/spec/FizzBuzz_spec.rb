RSpec.describe FizzBuzz do

  fizzBuzz = FizzBuzz::FizzBuzz.new

  it "has a version number" do
    expect(FizzBuzz::VERSION).not_to be nil
  end

  it "displays empty string when number is 0" do
    expect(fizzBuzz.display(0)).to eq("")
  end
end
