import re

def arithmetic_arranger(problems, cal = False):
  #too many problems
  if len(problems) > 5: 
    return "Error: Too many problems."
  
  formatted_problems = [problem.split(' ') for problem in problems]

  #operator error
  ok = all(problem[1] == '+' or problem[1] == '-' for problem in formatted_problems)
  if not ok:
    return 'Error: Operator must be \'+\' or \'-\'.';

  #not digit error
  pattern = '^\d+$'
  ok2 = all(re.match(pattern, problem[0]) and re.match(pattern, problem[2]) for problem in formatted_problems)
  if not ok2:
    return 'Error: Numbers must only contain digits.'

  #too many digit error
  ok3 = all(len(problem[0]) < 5 and len(problem[2]) < 5 for problem in formatted_problems)
  if not ok3:
    return 'Error: Numbers cannot be more than four digits.'
  
  #cal
  first = ""
  second = ""
  line = ""
  sum = ""

  for problem in formatted_problems:
    ans = ""
    if (problem[1] == '+'):
      ans = str(int(problem[0]) + int(problem[2]))
    else: 
      ans = str(int(problem[0]) - int(problem[2]))

    length = max(len(problem[0]), len(problem[2])) + 2

    first += problem[0].rjust(length)
    second += problem[1] + problem[2].rjust(length - 1)
    line += '-' * length
    sum += str(ans).rjust(length)

    if problem != formatted_problems[-1]:
      first += '    '
      second += '    '
      line += '    '
      sum += '    '

  #print
  res = first + '\n' + second + '\n' + line
  if (cal):
    res += '\n' + sum
  return res