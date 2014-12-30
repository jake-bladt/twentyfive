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
Within the given constraints, the only possible values are a = 1 and b = 0.

#### Invalid Set
```
a > b
b = 1
```

This set is invalid because there are no exclusive values from the set of [0,1] where b is 1 and a > 1.

The game is called twenty-five because, given all the letters of the standard English alphabet, the highest level (26) allows for values from 0-25.

## Purpose
I've played around with the notion of twenty-five as a pencil-and-paper puzzle game on-and-off for a few years. I've also wanted to study compiler creation. While I've been a software developer for 20+ years, I never studied computer science. Based on the titles and descriptions of comp-sci courses, I think I've picked up most of the concepts I would have learned with a formal education. 

Compiler design is a good way to fill in the gaps. It makes use of a lot of the concepts taught in lower-level classes. Unfortunately, non-trivial compilers for Turing-complete languages take years of work to get right. Twenty-five will make use of the concepts learned studying compilers while remaining constrained in its success conditions.
