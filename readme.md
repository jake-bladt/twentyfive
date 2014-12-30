# Twenty-Five
Twenty-five is a project in DSL compiler design. It's meant to describe a limited language built around a game called twenty-five (described below) and decidedly Turing-incomplete.

## The rules of Twenty-Five
Twenty-five is an algebraic game. Its goal is that, given a set of rules for n variables, they will be resolveable to exactly one set of values from zero to n-1. The number of variables is called the game's level.

### Example
In a level two game, there will be two variables - a and b, which will resolve to 0 and 1. There are two valid sets of values: (a = 0, b = 1) and (a = 1, b = 0). Any set of rules which describes one of these two sets is valid. Any set which does not is invalid.

#### Valid Set
```
a > b
```

#### Invalid Set
```
a > b
b = 1
```

