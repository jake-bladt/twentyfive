# Streamtest
A rubyish DSL for testing the content of streams.

## Requirements
A very simple set of commands including comments, basic flow control and a few commands.

## Syntax
**//** - The remainder of this line is a comment.
**describe** - Describe and enclose a block of tests.
**it** - Describe and enclose a single test.
**output contains** - Assert that the current output stream contains a string or a match for a regular expression.
**clear** - Clear the contents read from the output stream. 

## Sample
```
describe "The game twenty-five" {
  input "./twentyfive samplegame.g25"
  it "evaluates a variable with a single possible value" {
    output contains "a = 0"
  }

  it "determines that a variable has more than one possible value" {
    output contains "ERROR: b has more than one possible value (1, 2)"
  }
}
```
