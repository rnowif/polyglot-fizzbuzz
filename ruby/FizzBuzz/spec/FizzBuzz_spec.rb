RSpec.describe FizzBuzz do

  fizzBuzz = FizzBuzz::FizzBuzz.new

  it "has a version number" do
    expect(FizzBuzz::VERSION).not_to be nil
  end

  it "displays the number" do
    expect(fizzBuzz.display(2)).to eq("2")
  end
end
